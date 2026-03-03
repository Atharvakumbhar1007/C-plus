#include <stdio.h>

int main()
{
    struct Customer
    {
        char name[20];
        int age;
        int cid;
    };

    // Create structure variable
    struct Customer c1;

    printf("Enter name, age and cid: ");
    scanf("%s %d %d", c1.name, &c1.age, &c1.cid);

    printf("\nName: %s", c1.name);
    printf("\nAge: %d", c1.age);
    printf("\nCID: %d", c1.cid);

    return 0;
}