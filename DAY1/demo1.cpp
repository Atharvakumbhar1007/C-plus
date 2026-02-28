#include <iostream>
using namespace std;
int main()
{
    // cin --> console input
    int a;
    float b;
    char str[20];

    cout << "\nEnter a number: ";
    cin >> a;
    cout << "\nNumber is " << a;
    cin >> b >> str;
    cout << "\nInt is" << a << ",float is" << b << ",text is" << str;
}