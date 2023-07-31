#include <iostream>
#include <stack>
using std::cout;
using std::endl;
using std::stack;


template <class T>
void print(stack<T> s){
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}


int main(){

    stack<int> s;
    cout << s.empty() << endl;

    s.push(4);
    s.push(8);
    s.push(12);
    // 12 8 4 like a bus, last in, first out.
    cout << s.empty() << endl;
    cout << s.top() << endl;
    print(s);

    s.pop(); // 8 4 delete top value
    cout << "size: " << s.size() << endl;
    print(s);

    stack<int> s1(s);
    print(s1);
    s.pop();
    print(s);
    print(s1);
return 0;
}
