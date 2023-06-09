	#include <stdio.h>

int sumDigits(int number) {
    int sum = 0;
    
    if (number < 0) {
        number = -number; // Handle negative numbers
    }
    
    while (number > 0) {
        int digit = number % 10; // Extract the last digit
        sum += digit; // Add the digit to the sum
        number /= 10; // Remove the last digit
    }
    
    return sum;
}

int main() {
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    
    int sum = sumDigits(number);
    
    printf("Sum of the digits: %d\n", sum);
    
    return 0;
}
