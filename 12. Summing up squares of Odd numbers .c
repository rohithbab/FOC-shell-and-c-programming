#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1; i <= n; i += 2) {
        int square = i * i;  // Calculate the square of the current odd number
        sum += square;
    }

    printf("Sum of the squares of odd numbers: %d\n", sum);

    return 0;
}
