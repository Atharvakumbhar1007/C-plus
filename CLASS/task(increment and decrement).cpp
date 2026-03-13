#include <iostream>
using namespace std;

int main() {
    int a = 37;
    int b = 25;

    int c = a-- - ++b - ++b - ++a - b - --a + a-- - b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
