#include <bits/stdc++.h>
using namespace std;
// Take the day and print the corresponding day
// for 1 print monday,
// for 2 print tuesday and so on for 7 print sunday
int main()
{

    int day;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "moday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "wednesday";
        break;
    case 4:
        cout << "Thuesday";
        break;
    case 5:
        cout << "friday";
        break;
    case 6:
        cout << "saturday";
        break;
    case 7:
        cout << "sunday";
        break;

    default:
        break;
    }
    cout << "check";

    return 0;
}