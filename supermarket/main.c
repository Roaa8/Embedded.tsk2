#include <stdio.h>

int main() {
    char itemName[100];
    double itemPrice;
    int itemCount = 0;
    double totalCost = 0.0;
    char shippingOption;
    int discount = 0;

    printf("Welcome to the Online Market!\n");

    while (1) {
        printf("\nEnter item name: ");
        scanf("%s", itemName);

        printf("Enter item price: ");
        scanf("%lf", &itemPrice);
        totalCost+=itemPrice;

        printf("Do you need OVERNIGHT shipping? (Y/N): ");
        scanf(" %c", &shippingOption);

        switch (shippingOption) {
            case 'Y':
            case 'y':
                totalCost += 5.0;
                break;
            case 'N':
            case 'n':
                 if (itemPrice < 10.0) {
            totalCost += 2.0;
        } else {
            totalCost += 3.0;
        }
                break;
            default:
                printf("Invalid option for shipping. Assuming 'N' (No).\n");
                break;
        }

        itemCount++;

        printf("Do you want to continue shopping? (Y/N): ");
        scanf(" %c", &shippingOption);

        if (shippingOption == 'N' || shippingOption == 'n') {
            break;
        }
    }

    if (itemCount < 2) {
        printf("Minimum 2 items are required for an order.\n");
    } else {
        if (itemCount > 5) {
            discount = 20;
        }

        double discountedTotal = totalCost - (totalCost * discount / 100);

        printf("\n--- Invoice ---\n");
        printf("Number of Items: %d\n", itemCount);
        printf("Total Cost (before discount): $%.2lf\n", totalCost);
        printf("Discount: %d%%\n", discount);
        printf("Total Cost (after discount): $%.2lf\n", discountedTotal);
    }

    printf("\nThank you for shopping with us!\n");

    return 0;
}
