//write a program to print "FIZZ" if the number 
// is divisible of 3 and "BUZZ" if the number is 
// divisible of 5 and "FIZZBUZZ" if the 
// number is divisible  3 & 5 simultaneously. numbers
// between 30 to 80
#include <iostream>

using namespace std;

int main() {
    
    for(int i  = 30; i<=80; i++){
        if(i%3 == 0 && i % 5 == 0){
            cout<<i<<" -\"FIZZBUZZ\""<<endl;
        }
        else if(i % 5 == 0){
            cout<<i<<" -\"BUZZ\""<<endl;
        }
        else if(i%3 == 0){
            cout<<i<<" -\"FIZZ\""<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }

    return 0;
}