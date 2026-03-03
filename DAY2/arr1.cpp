// Marks of 100 --> average
#include <stdio.h>
int main()
{
    // int a1 + a2 + a3 + a4..............a100;
    int sum;
    // sum = a1 + a2 + a3 + a4..............a100;
    // printf("\nEnter marks: ");
    // scanf("%d%d%d%........%d:");
    int a[100];

    int i, sum = 0;
    for (i = 0; i < 1; i++)
    {
        printf("\nEnter marks: ");
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("\nThe Sum is %d", sum);
}