#include <iostream>
using namespace std;

class employee {
private:
    int salary;   

public:
    employee(int s) {
        salary = s;
    }

    // Friend function declaration
    friend void displaySalary(employee emp);
};

// Friend function definition
void displaySalary(employee emp) {
    cout << "Salary: " << emp.salary;
}

int main() {
    employee myemp(50000);
    displaySalary(myemp);
    return 0;
}
