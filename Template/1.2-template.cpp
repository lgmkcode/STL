#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

template <class T>
class myclass{
    public:
        T data;

        // constructor
        myclass(T data){
            this->data = data; //  myclass(T data):data(data){}
        }
};


int main(){

    myclass<int> testclass(10);
    cout << testclass.data << endl;

    myclass<string> testclass1("Hello-World");
    cout << testclass1.data << endl;
return 0;
}
