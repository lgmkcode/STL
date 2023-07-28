#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

// iterator function
template <typename T>
void print_vector(vector<T>& v){
    typename vector<T>::iterator i = v.begin();
    while(i != v.end())
        cout << *i++ << " ";
    cout << endl;
}


int main(){

    vector<int> v; //blank vector
    vector<int> v1(5,10); // 10, 10, 10, 10, 10
    vector<int> v2(10); // 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
    vector<int> v3(&v2[5], &v2[8]); // 0, 0, 0
    vector<int> v4(v1); // 10, 10, 10, 10, 10

    print_vector(v);
    print_vector(v1);
    print_vector(v2);
    print_vector(v3);
    print_vector(v4);

//Iterators work like generalized pointers and are powerful C++ tools
//used to navigate data structures for traversing data elements.

    vector<int>::iterator i = v2.begin();
    while(i != v2.end())
        cout << *i++ << " ";

return 0;
}
