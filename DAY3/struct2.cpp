#include<stdio.h>
int main()
{
    //a bill contains a products
    //use the product structure and find thr total bill amount
    //get product data from user, print it and also print the total bill amount
    struct Product {
        int id;
        char name[50];
        float price;
        int quantity;
    };

    Product products[5];
    int numProducts;
    float totalBill = 0;

    printf("Enter number of products: ");
    scanf("%d", &numProducts);

    for(int i = 0; i < numProducts; i++) {
        printf("\nProduct %d details:\n", i+1);
        printf("Enter product ID: ");
        scanf("%d", &products[i].id);
        printf("Enter product name: ");
        scanf("%s", products[i].name);
        printf("Enter price: ");
        scanf("%f", &products[i].price);
        printf("Enter quantity: ");
        scanf("%d", &products[i].quantity);
        
        totalBill += products[i].price * products[i].quantity;
    }

    printf("\n--- Bill Details ---\n");
    for(int i = 0; i < numProducts; i++) {
        printf("ID: %d, Name: %s, Price: %.2f, Qty: %d, Total: %.2f\n", 
               products[i].id, products[i].name, products[i].price, 
               products[i].quantity, products[i].price * products[i].quantity);
    }
    printf("\nTotal Bill Amount: %.2f\n", totalBill);

    return 0;

}