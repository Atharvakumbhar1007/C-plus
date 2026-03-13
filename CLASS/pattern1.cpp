#include<iostream>
using namespace std;
int main(){
    char ch = 'a';
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j <3; j++)
        {
            cout << char(ch + i) <<"\t";
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main() {
    
    
    for(char alpha = 'a'; alpha <= 'c'; alpha++){
        for(int repeat = 1; repeat <= 3; repeat++){
            cout<< alpha<<"\t";
        }
        cout<<endl;
    }
    

    return 0;
}