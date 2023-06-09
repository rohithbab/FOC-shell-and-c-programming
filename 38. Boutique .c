#include <stdio.h>

int main() {
    float originalPrice, salePrice;
    int numDays = 5;
    
    // Input the original price of the item
    printf("Enter the original price of the item: ");
    scanf("%f", &originalPrice);

    salePrice = originalPrice;

    // Calculate the sale price for each day
    for (int day = 1; day <= numDays; day++) {
        printf("Sale price on Day %d: $%.2f\n", day, salePrice);
        salePrice *= 0.9; // Reduce the sale price by 10% each day
    }

    return 0;
}
