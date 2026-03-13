#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 0;

    try
    {
        if (b == 0)
        {
            throw "Division by zero error";
        }
        cout << a / b;
    }
    catch (const char *msg)
    {
        cout << msg;
    }
    cout << "A =" << a << " & B = " << b;
    for (int i = 0; i <= 5; i++)
    {
        cout << "\n i =" << i;
    }
    return 0;
}