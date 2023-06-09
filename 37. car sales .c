#include <stdio.h>

int main() {
    float carPrice, totalAccessories = 0, salesTaxRate, totalPrice;

    // Input car price and sales tax rate
    printf("Enter the initial price of the car: ");
    scanf("%f", &carPrice);
    
    printf("Enter the sales tax rate (in decimal form): ");
    scanf("%f", &salesTaxRate);

    // Input number of accessories and their prices
    int numAccessories;
    printf("Enter the number of accessories: ");
    scanf("%d", &numAccessories);
    
    for (int i = 1; i <= numAccessories; i++) {
        float accessoryPrice;
        printf("Enter the price of accessory %d: ", i);
        scanf("%f", &accessoryPrice);
        totalAccessories += accessoryPrice;
    }

    // Calculate total price
    totalPrice = carPrice + totalAccessories + (carPrice + totalAccessories) * salesTaxRate;

    // Output total price
    printf("Total cost of the car: %.2f\n", totalPrice);

    return 0;
}
