#include <stdio.h>
int main()
{
    // Create a structure to represent a product in a supermarket
    // Print the detail of that product and ask the details from the user
    // Structure to represent a product.
    struct Product
    {
        int id;
        char name[30];
        float price;
        int quatity;
    };

    struct Product p;
    {
        // Taking input from user
        printf("Enter product ID:");
        scanf("%d", &p.id);

        printf("Enter Product Name: ");
        scanf("%s", &p.name);

        printf("Enter Product Price: ");
        scanf("%s", &p.price);

        printf("Enter Product Quatity: ");
        scanf("%s", &p.quatity);

        // Printing product details
        printf("Product ID: %d\n", p.id);
        printf("Product Name: %s\n", p.name);
        printf("Product Price: %.2f\n", p.price);
        printf("Product Quatity: %d\n", p.quatity);

        return 0;
    };
}