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
/* #include <bits/stdc++.h>
using namespace std;

int main()
{
    int marks;
    cin >> marks;

    if (marks >= 80)
        cout << "Grade A";
    else if (marks >= 60)
        cout << "Grade B";
    else if (marks >= 50)
        cout << "Grade C";
    else if (marks >= 45)
        cout << "Grade D";
    else if (marks >= 25)
        cout << "Grade E";
    else
        cout << "Grade F";

    return 0;
} */