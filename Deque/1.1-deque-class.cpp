#include <iostream>
#include <deque>
#include <vector>
using std::cout;
using std::endl;
using std::deque;
using std::vector;


template <class T>
void print(T& t){
    typename T::iterator iter = t.begin();
    while(iter != t.end())
        cout << *iter++ << " ";
    cout << endl;
}


int main(){

    deque<int> d;
    cout << d.empty() << endl;

    d.push_back(2);
    print(d);
    d.push_back(3);
    print(d);
    d.push_front(4);
    print(d);
    cout << d.empty() << endl;
    cout << d.front() << endl;
    cout << d.back() << endl << endl;

    print(d);
    d.pop_back();
    print(d);
    d.pop_front();
    print(d);
    cout << endl;

    print(d);
    d.push_back(1);
    print(d);
    cout << d.empty() << endl;
    d.clear();
    cout << d.empty() << endl << endl;

    d.insert(d.begin(), 5);
    print(d);
    d.insert(d.end(), 9);
    print(d);
    vector<int> v;
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(14);
    cout << "vector: ";
    print(v);
    d.insert(d.begin() +1, &v[1], &v[3]); //or d.end();
    print(d);

    d.erase(d.begin()+1); //d.end(), d.begin()
    print(d);
    d.erase(d.begin() +2, d.end()); //d.end() -1
    print(d);
    cout << d.size() << endl;
    d.resize(1);
    print(d);
    d.resize(10);
    print(d);
    cout << d.size() << endl;
    d.resize(12, 5);
    print(d);

    deque<int> d2(d);
    print(d2);
    deque<int> d3(6, 9);
    print(d3);
    deque<int> d4(&d[2], &d[11]);
    print(d4);

return 0;
}
