#include <iostream>
#include <list>
using std::list;
using std::cout;
using std::endl;

template <class T>
void print_list(T& t){
    typename T::iterator i = t.begin();
    while(i != t.end())
        cout << *i++ << " ";
    cout << endl;
}

int main(){

    //list define
    list<int> l;
    list<int> l2(5, 6);
    list<int> l3(10);
    list<int> l4(l3.begin(), l3.end());
    list<int> l5(l2);

    //print_list iterator function
    print_list(l);
    print_list(l2);
    print_list(l3);
    print_list(l4);
    print_list(l5);

    //empty list check
    cout << l.empty() << endl;
    cout << l2.empty() << endl;

    // We cannot access iterators in list with indexes like we can with vectors.
    l.begin(); //for example "l.begin() + 1" is undefined
    l.end();   //for example "l.end() - 1" is undefined

    cout << l2.front() << endl;
    cout << l2.back() << endl;

    l2.clear(); //cleaning inside the list
    cout << l2.empty() << endl;

    //assign value to list with iterator
    l2.insert(l2.begin(), 5);
    l2.insert(l2.end(), 7);
    l2.insert(l2.end(), 9);
    print_list(l2);

    //assign value to list without iterator
    l2.push_back(11);
    print_list(l2);
    l2.push_front(3);
    print_list(l2);
    cout << l2.size() << endl; //list size

    //created for use in the last part
    list<int> l7(l2);
    list<int> l9(l2);
    l9.push_back(8);
    list<int> l11(l9);

    //extract value from list without iterators
    print_list(l2);
    l2.pop_back();
    print_list(l2);
    l2.pop_front();
    print_list(l2);

    //extract value from list with iterators
    l2.erase(l2.begin(), l2.end());
    print_list(l2);

    l2.push_back(5);
    l2.push_back(3);
    l2.push_back(4);
    l2.push_back(5);
    print_list(l2);

    //created for use in the last part
    list<int> l6(l2);
    list<int> l8(l2);
    list<int> l12(l2);

    //remove specific value
    l2.remove(5);
    print_list(l2);

    //splice
    print_list(l7);
    print_list(l6);
    l7.splice(l7.end(), l6);
    print_list(l7);
    cout << l6.empty() << endl; //l6 is empty

    //merge
    print_list(l8);
    print_list(l9);
    //If you merge without using sort, this operation is not exactly correct.
    l9.merge(l8);
    print_list(l9);
    cout << l8.empty() << endl;

    //merge + sort
    print_list(l11);
    print_list(l12);
    l11.sort();
    l12.sort();
    print_list(l11);
    print_list(l12);
    l12.merge(l11);
    print_list(l12);
    cout << l11.empty() << endl;

    // unique (makes consecutively identical numbers unique)
    l12.unique();
    print_list(l12);
return 0;
}
