#include <iostream>

using namespace std;

int main() {
    int x = 79;
    int y = 109;
    int z = 36;
    
    cout<<"x & y: "<<(x & y)<<endl;
    
    cout<<"x | y: "<<(x | y)<<endl;
    
    cout<<"x ^ y: "<<(x ^ y)<<endl;
    
    cout<<"z = "<<(z>>1)<<endl;
    cout<<"z = "<<(z>>6)<<endl;
    
    cout<<"z = "<<(z<<1)<<endl;
    cout<<"z = "<<(z<<6)<<endl;
    
    // cout <<"or: "<<((x > y) || (x > 5))<<endl;
    
    // cout <<"and: "<< ((x > y) && (x > 5))<<endl;
    
    // cout <<"not or: "<< !((x > y) || (x > 5))<<endl;
    
    // cout <<"not and: "<< !((x > y) && (x > 5))<<endl;

    return 0;
}