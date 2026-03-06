#include <stdio.h>
int main()
{
    // imagine you have 3 customers
    struct Customer
    {
        int age;
        char name[20];
        int cid;
        // 50 varibles
    };
    // a structure is your own datatype
    // int
    struct Customer c[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("\nEnter your name ,age and cid: ");
        scanf("%d%d%d", &c[i].name, &c[i].age, &c[i].cid);
    }

    // no need to write 3 lines of codes
    for (i = 0; i < 3; i++)
    {
        printf("\nNmae: %s\nAge: %d\nID: %d", &c[i].name, &c[i].age, &c[i].cid);
    }
}