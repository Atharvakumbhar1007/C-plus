#include <iostream>
using namespace std;
int main()
{
    char str[20];
    cout << "\nEnter somme text: ";
    cin.getline(str, 50);
    cout << "\nYou entered " << str;
}