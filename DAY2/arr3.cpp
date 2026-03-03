#include <stdio.h>

int main()
{
    struct Customer
    {
        char name[20];
        int age;
        int cid;
    };

    struct Customer c1, c2;

    printf("Enter name, age and cid: ");
    scanf("%19s %d %d", c1.name, &c1.age, &c1.cid);

    // Direct structure copy
    c2 = c1;

    printf("\nName: %s", c2.name);
    printf("\nAge: %d", c2.age);
    printf("\nCID: %d", c2.cid);

    return 0;
}