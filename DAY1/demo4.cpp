#include <iostream>
using namespace std;

int main()
{
    // any valid C code is valid C++ code but converse is not true.
    int a = 5;
    float d = 10.56886;
    char c = 'u';
    char str[200] = "hi dear!!!how are you?";

    printf("\n integer is %d float is %f char is %c and text is %s", a, d, c, str);

    cout << "\nHello";
    cout << "\n integer is " << a
         << " float is " << d
         << " char is " << c
         << " and text is " << str;

    return 0;
}