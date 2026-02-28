#include <stdio.h>
#include <stdlib.h>

int main()
{
    // abs - absolute value for int
    int a = 4;

    // fabs - absolute value for float/double
    float b = -4560.2255;

    printf("\nAbsolute value of %d is %d", a, abs(a));
    printf("\nAbsolute value of %f is %f", b, fabs(b));

    return 0;
}