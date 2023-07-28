#include <iostream>
using std::cout;
using std::endl;


template <class T>      // or <typename T> but recommended <class T>
T increase(T x){
    return x+1;
}


template <class T>
void swap(T &a, T &b){
    T temp= b;
    b = a;
    a = temp;
}


int main(){

    cout << increase(2.14) << endl;
    cout << increase(2) << endl;

    int a = 5, b = 10;
    cout << "a = " << a << "\t" << "b = " << b << endl;
    swap(a,b);
    cout << "a = " << a << "\t" << "b = " << b << endl;

    char c = 'X', d = 'Y';
    cout << "c = " << c << "\t" << "d = " << d << endl;
    swap(c,d);
    cout << "c = " << c << "\t" << "d = " << d << endl;



return 0;
}
