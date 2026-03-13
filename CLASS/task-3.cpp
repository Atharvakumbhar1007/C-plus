//WAP to print the value between  500 to 50 with a 5 gap.
#include<iostream>
using namespace std;

int main(){
    for( int i = 50; i<=500; i -= 5){
        cout<< i <<" ";
    }
    return 0;
}

//WAP to print the values between 100 to 50.
#include<iostream>
using namespace std;

int main(){
    for(int i = 100; i >= 50; i--){
        cout<< i << " ";
    }
    return 0;
}


//write a program to print the sum 
//of all natural numbers between 10 to 100
#include<iostream>
using namespace std;

int main(){
    int sum = 0;

    for(int i = 10; i <= 100; i++){
        sum = sum + i
    }
    cout<< "Sum of all natural number is : "<< sum;
    return 0;
}

//