#include <stdio.h>
// different function doing similar things - code repition
// shopping app
struct Customer
{
    int age;
    char name[20];
    // 25 variables
};
// functions
void EnterCustometerData();
void CheckCustomerData(struct Customer);
void CalculateAge(struct Customer);
void ValidateData(struct Customer);
// 25 Functions

struct Supplier
{
    int age;
    char name[20];
    // 25 variables
};

void CheckContract(struct Supplier);
void GetProductList(struct Suplier);
// 25 function
// code size ---> testing time
