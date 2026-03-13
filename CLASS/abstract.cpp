#include <iostream>
using namespace std;

class ATM
{
private:
    int pin = 2000;
    string name;

public:
    void verifyPin(int enteredPin)
    {
        if (enteredPin == pin)
        {
            cout << "Access Granted" << endl;
        }
        else
        {
            cout << "Access Denied" << endl;
        }
    }

    void setname(string n)
    {
        name = n;
    }

    string getName()
    {
        return name;
    }
};

int main()
{
    ATM a;

    a.verifyPin(2000);

    a.setname("Atharva");

    cout << "Name: " << a.getName();

    return 0;
}