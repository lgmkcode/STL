#include <iostream>
#include <vector>
using std::vector;

int main(){

    // constructor methods of vectors
    vector<int> v; //blank vector
    vector<int> v1(5,10); // 10, 10, 10, 10, 10
    vector<int> v2(10); // 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
    vector<int> v3(&v2[5], &v2[8]); // 0, 0, 0
    vector<int> v4(v1); // 10, 10, 10, 10, 10

return 0;
}
