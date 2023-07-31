#include <iostream>
#include <queue> //includes <vector>
#include <stdlib.h>
#include <time.h>
using std::cout;
using std::endl;
using std::priority_queue;
using std::vector;


template <class T>
void print(T t){
    while(!t.empty()){
        cout << t.top() << " ";
        t.pop();
    }
    cout << endl;
}


template <class T>
bool cmp(T x, T y){
    return x > y;
}


int main(){
    srand(time(0));

    priority_queue<int> p;
    cout << p.empty() << endl << endl;
    p.push(5); // 5
    print(p);
    p.push(23); // 23 > 5 -> 23 5
    print(p);
    p.push(9); // 9 > 23, 9 > 5 -> 23 9 5
    print(p);
    p.push(8); // 8 > 23, 8 > 9, 8 > 5 -> 23 9 8 5
    print(p);
    // 23 9 8 5
    cout << p.empty() << endl;
    cout << p.top() << endl;

    cout << "=====p2=====" << endl;
    priority_queue<int,vector<int>,bool(*)(int,int)> p2(cmp);
    p2.push(5); // 5
    print(p2);
    p2.push(23); // 23 < 5 -> 5 23
    print(p2);
    p2.push(9); // 9 < 5, 9 < 23 -> 5 9 23
    print(p2);
    p2.push(8); // 8 < 5, 8 < 9 -> 5 8 9 23
    print(p2);

    cout << "=====p3=====" << endl;
    int random;
    vector<int> v;
    for(int i=0; i<10; i++){
        random = rand() % 100;
        cout << random << " ";
        v.push_back(random);
    }

    cout << endl;
    priority_queue<int> p3(v.begin(), v.end());
    print(p3);

    cout << "=====p4=====" << endl;
    priority_queue<int,vector<int>,bool(*)(int,int)> p4(v.begin(),v.end(),cmp);
    print(p4);
return 0;
}
