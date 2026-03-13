#include <bits/stdc++.h>
using namespace std;

int main()
{
    int grade;
    cout << "Enter marks: ";
    cin >> grade;

    if (grade >= 80 && grade <= 100)
    {
        cout << "You achieved Grade A";
    }
    else if (grade >= 60 && grade <= 79)
    {
        cout << "You achieved Grade B";
    }
    else if (grade >= 50 && grade <= 59)
    {
        cout << "You achieved Grade C";
    }
    else if (grade >= 45 && grade <= 49)
    {
        cout << "You achieved Grade D";
    }
    else if (grade >= 25 && grade <= 44)
    {
        cout << "You achieved Grade E";
    }
    else
    {
        cout << "You are Fail, your grade is F";
    }

    return 0;
}