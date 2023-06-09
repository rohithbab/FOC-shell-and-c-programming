#include <stdio.h>

void printDigits(int number) {
    if (number == 0) {
        printf("0");  // Special case for number = 0
        return;
    }

    if (number < 0) {
        printf("-");  // Handle negative numbers
        number = -number;
    }

    int reverse = 0;
    while (number > 0) {
        int digit = number % 10;  // Extract the last digit
        reverse = reverse * 10 + digit;  // Build the reversed number
        number /= 10;  // Remove the last digit
    }

    while (reverse > 0) {
        int digit = reverse % 10;  // Extract the last digit
        printf("%d ", digit);  // Print the digit
        reverse /= 10;  // Remove the last digit
    }
}

int main() {
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);

    printf("Digits: ");
    printDigits(number);
    printf("\n");

    return 0;
}
