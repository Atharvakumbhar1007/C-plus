#include <iostream>
using namespace std;

/* Scenario:
A college wants to store student details.

Task:
Create a Student class with:
private data members: rollNo, name, marks
a constructor to initialize values
public method to display student detail
*/

class Student
{
private:
    int rollNo;
    string name;
    double marks;

public:
    // Constructor
    Student(int r, string n, double m)
    {
        rollNo = r;
        name = n;
        marks = m;
    }

    // Method to display student details
    void displayStudentDetails()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1(101, "Atharva", 88.5);
    s1.displayStudentDetails();

    return 0;
}