#include <stdio.h>

int main() {
    int numberOfPeople;
    char isCompanyBusiness, isOver60;
    double roomCost;

    printf("Enter the number of people staying in the room: ");
    scanf("%d", &numberOfPeople);

    printf("Is the customer staying on company business? (Y/N): ");
    scanf(" %c", &isCompanyBusiness);

    printf("Is the customer over 60 years of age? (Y/N): ");
    scanf(" %c", &isOver60);

    if (numberOfPeople == 2) {
        roomCost = 85.00;
    } else if (numberOfPeople == 3) {
        roomCost = 90.00;
    } else if (numberOfPeople == 4) {
        roomCost = 95.00;
    } else if (numberOfPeople > 4) {
        roomCost = 95.00 + ((numberOfPeople - 4) * 6.00);
    } else {
        printf("Invalid number of people.\n");
        return 0;
    }

    if (isCompanyBusiness == 'Y' && isOver60 != 'Y') {
        roomCost = roomCost * 0.8;  // 20% discount for company business
    } else if (isCompanyBusiness != 'Y' && isOver60 == 'Y') {
        roomCost = roomCost * 0.85;  // 15% discount for customers over 60 years old
    }

    printf("Cost of the room: $%.2lf\n", roomCost);

    return 0;
}
