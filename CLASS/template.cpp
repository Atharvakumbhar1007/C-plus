#include<iostream>
using namespace std;


    template <typename T>
    T add(T a, T b){
        return a + b;
    }
    int main(){
        cout << "integer addition: " << add(10, 71) << endl;
        cout << "double addition: " << add(10.020, 71.565) << endl;
        cout << "Float addition: " << add(10.1f, 7.1f) << endl;
    }