#include <iostream>
using namespace std;

int main()
{
    try
    {
        int age = 15;
        if (age >= 18)
        {
            cout << "access granted - you are old enough.";
        }
        else
        {
            throw(age);
        }
    }
    catch (int myNum)
    {
        cout << "access granted - you are not old enough.\n";
        cout << "age is: " << myNum;
    }
    return 0;
}