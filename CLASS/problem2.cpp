/*Scenario:
A bank needs to open customer accounts.

Task:
Create a BankAccount class with:

private members: accountNumber, holderName, balance

constructor to initialize account details

methods deposit() and withdraw()

ensure balance cannot be directly modified (encapsulation)*/
#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string holderName;
    double balance;

public:
    // Constructor
    BankAccount(int accNo, string name, double bal)
    {
        accountNumber = accNo;
        holderName = name;
        balance = bal;
    }

    // Deposit method
    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited: " << amount << endl;
        cout << "Updated Balance: " << balance << endl;
    }

    // Withdraw method
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
            cout << "Remaining Balance: " << balance << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    // Method to display account details
    void displayDetails()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Holder Name: " << holderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount acc1(1001, "Atharva", 5000);

    acc1.displayDetails();
    cout << endl;

    acc1.deposit(2000);
    cout << endl;

    acc1.withdraw(1500);

    return 0;
}