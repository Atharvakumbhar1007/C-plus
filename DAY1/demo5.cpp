#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a;
    float d;
    char str[200];

    printf("Enter an integer, a float, and a text: ");
    scanf("%d %f %s", &a, &d, str);

    printf("\nYou entered:\n");
    printf("Integer: %d\nFloat: %f\nText: %s\n", a, d, str);
    cout << "\n enter an integer,a float, and a text:";
    cin >> a >> d >> str;

}