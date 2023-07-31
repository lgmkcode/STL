#include <iostream>
#include <queue>
using std::cout;
using std::endl;
using std::queue;


// we do not use iterator
template <class T>
void print(queue<T> q){
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}


int main(){

    queue<int> q; //like a bank queue, first in, first out.

    cout << q.empty() << endl;
    q.push(1);
    q.push(3);
    q.push(5);
    q.push(7);
    // 1 3 5 7
    cout << q.empty() << endl;
    cout << "first element: " << q.front() << endl;
    cout << "last element: " << q.back() << endl;
    cout << "size: " << q.size() << endl;
    print(q);

    q.pop(); //like a bank queue, first in, first out.
    // 3 5 7
    cout << "first element: " << q.front() << endl;
    cout << "size: " << q.size() << endl;
    print(q);

    queue<int> q1(q);
    cout << "first element: " << q1.front() << endl;
    cout << "size: " << q1.size() << endl;

    q.pop();
    cout << "q size: " << q.size() << endl;
    cout << "q1 size: " << q1.size() << endl;
    print(q);
    print(q1);
return 0;
}
