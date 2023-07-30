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

    vector<int> v1;
    v1.insert(v1.begin(), 5);
    v1.insert(v1.end(), 10);
    v1.insert(v1.begin(), 0);
    print_vector(v1);

    //The value entered as a parameter to the push_back
    //method is added to the end of the vector.
    v1.push_back(15);
    print_vector(v1);

    v1.pop_back(); //delete last element
    v1.push_back(20);
    print_vector(v1);

    cout << v1.empty() << endl; //empty vector -> output: 1

    cout << *v1.begin() << endl;
    //v1.end() is an iterator that points to
    //one past the last element of the vector.
    cout << *(v1.end() -1) << endl;
    cout << v1.front() << endl;
    cout << v1.back() << endl;

    v1.erase(v1.begin() + 2, v1.end() -2);
    print_vector(v1);

    v1.push_back(20);
    v1.push_back(80);
    print_vector(v1);

    cout << v1.size() << endl;
    //The capacity varies dynamically depending
    //on the number of elements of the vector.
    cout << v1.capacity() << endl;

    vector<int> v2;
    for(int i = 0; i<10;i++)
        v2.push_back(i*3);
    print_vector(v2);

    v1.swap(v2);
    print_vector(v2);
    cout << endl;
    print_vector(v1);

    vector<int> v3;
    //parameter 3 of the method is not included.
    v3.insert(v3.begin(), &v1[2], &v1[5]);
    print_vector(v3);

return 0;
}
