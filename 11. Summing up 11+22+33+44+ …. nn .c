#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        int term = i * 11;  // Calculate the current term
        sum += term;
    }

    printf("Sum of the series: %d\n", sum);

    return 0;
}
