// WAP to print positive nagetive or neutral //

//WAP to print check no. is even or odd//
//WAP to cheack the given year is leaf or not//
//WAP to check which is the greatest no of all a = 79
// b = 45 c = 89//

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n > 0) {
        cout << "The number is Positive.";
    }
    else if (n < 0) {
        cout << "The number is Negative.";
    }
    else {
        cout << "The number is Neutral (Zero).";
    }

    return 0;
}
