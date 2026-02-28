#include <iostream>
using namespace std;
int main()
{
    char str[20];
    int a;
    cout << "\nEnter somme text: ";
    cin >> a;
    cin.ignore(); // 45 <--(ignore)
    cout << "\nYou entered " << str;
    cin.getline(str, 50);
}