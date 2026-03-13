#include <iostream>
using namespace std;

int main() {
    string name;
    int age, members;
    char gender;
    const int price = 500;
    cout << "Welcome to HACKATHON\n";
    do {
        cout << "Enter your age (18-25): ";
        cin >> age;
    } while (age < 18 || age > 25);

    cin.ignore();
    cout << "Enter your name: ";
    getline(cin, name);

    do {
        cout << "Enter team gender (M/F): ";
        cin >> gender;
    } while (gender != 'M' && gender != 'F');

    do {
        cout << "Enter number of team members (1-4): ";
        cin >> members;
    } while (members < 1 || members > 4);

    int total = members * price;
    float discount = 0;

    if (members > 1) {
        if (gender == 'M')
            discount = total * 0.20;
        else
            discount = total * 0.30;
    }
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Members: " << members << endl;
    cout << "Total Price: " << total << endl;
    cout << "Discount: " << discount << endl;

    return 0;
}
