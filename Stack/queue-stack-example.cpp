#include <iostream>
#include <queue>
#include <stack>
using std::cout;
using std::cin;
using std::endl;
using std::queue;
using std::stack;
using std::string;

int main(){

    string str;
    queue<char> q;
    stack<char> s;
    bool palindrome = true;

    cout << "enter a word: ";
    cin >> str; // testword

    for(int i = 0; i < str.length(); i++){
         q.push(str[i]); // testword
         s.push(str[i]); // drowtset
    }

    while(!s.empty() and !q.empty()){
        if(q.front() != s.top()){
            palindrome = false;
            break;
        }
        q.pop();
        s.pop();
    }

    if(palindrome){
        cout << str << " is a palindrome." << endl;
    }
    else{
        cout << str << " is not a palindrome." << endl;
    }

return 0;
}
