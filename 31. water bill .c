#include <stdio.h>

int main() {
    double cubic_feet, bill_amount;

    printf("Enter the cubic feet of water used: ");
    scanf("%lf", &cubic_feet);

    if (cubic_feet <= 1000) {
        bill_amount = 15.00;
    } else if (cubic_feet > 1000 && cubic_feet <= 2000) {
        double additional_cubic_feet = cubic_feet - 1000;
        bill_amount = 15.00 + (additional_cubic_feet * 0.0175);
    } else if (cubic_feet > 2000 && cubic_feet <= 3000) {
        double additional_cubic_feet = cubic_feet - 2000;
        bill_amount = 15.00 + (1000 * 0.0175) + (additional_cubic_feet * 0.02);
    } else {
        bill_amount = 15.00 + (1000 * 0.0175) + (1000 * 0.02) + ((cubic_feet - 3000) * 70.00);
    }

    printf("The water bill is: $%.2lf\n", bill_amount);

    return 0;
}
