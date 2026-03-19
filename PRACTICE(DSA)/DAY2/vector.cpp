#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) << " "; // 20

    it = it + 2;
    cout << *(it) << " "; // 40

    it = v.end(); // points after last (don't dereference)

    vector<int>::reverse_iterator rit = v.rbegin();
    cout << *rit << " "; // 50

    cout << v[0] << " " << v.at(0) << " "; // 10 10

    cout << v.back() << " "; // 50

    return 0;
}