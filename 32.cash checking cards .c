#include <stdio.h>
#include <string.h>

int main() {
    int originalNumber;
    printf("Enter the four-digit number: ");
    scanf("%d", &originalNumber);

    // Step 3: Add the digits of the originalNumber
    int digitSum = 0;
    int tempNumber = originalNumber;
    while (tempNumber > 0) {
        digitSum += tempNumber % 10;
        tempNumber /= 10;
    }

    // Step 4: Determine the check digit
    int checkDigit = (digitSum % 2 == 0) ? 0 : 1;

    // Step 5: Create the new number by concatenating the originalNumber and checkDigit
    char newNumber[6];
    sprintf(newNumber, "%d%d", originalNumber, checkDigit);

    // Step 6: Print the originalNumber and the new number
    printf("Original Number: %d\n", originalNumber);
    printf("New Number: %s\n", newNumber);

    return 0;
}
