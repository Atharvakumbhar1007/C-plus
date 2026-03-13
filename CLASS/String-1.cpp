#include <iostream>
#include <string>
using namespace std;

int main() {
    string myString = "Hello";
    cout << "Original string: "<< myString << "\n";
    
    cout << "First charater: " <<myString.at(0) << "\n";
    cout << "Second charater: " <<myString.at(1) << "\n";
    cout << "Last charater" <<
myString.at(myString.length() - 1) << "\n";

    myString.at(0) = 'J';
    cout << "Changed string: " << myString;
    return 0;
}
