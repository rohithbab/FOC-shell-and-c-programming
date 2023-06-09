#include <stdio.h>

int reverseDigits(int number) {
    int reversed = 0;

    while (number != 0) {
        int digit = number % 10;  // Extract the last digit
        reversed = reversed * 10 + digit;  // Build the reversed number
        number /= 10;  // Remove the last digit
    }

    return reversed;
}

int main() {
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);

    int reversedNumber = reverseDigits(number);

    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}
