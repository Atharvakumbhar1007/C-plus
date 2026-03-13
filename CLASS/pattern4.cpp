#include <iostream>
using namespace std;
int main() {
    
    
    for(int row = 1; row <= 3; row++){
        for(int col = 1; col <= row; col++){
            cout<<"*\t";
        }
        cout<<endl;
    }
    

    return 0;
}