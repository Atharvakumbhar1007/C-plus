#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int y = 20;
    
    cout <<"or: "<<((x > y) || (x > 5))<<endl;
    
    cout <<"and: "<< ((x > y) && (x > 5))<<endl;
    
    cout <<"not or: "<< !((x > y) || (x > 5))<<endl;
    
    cout <<"not and: "<< !((x > y) && (x > 5))<<endl;

    return 0;
}