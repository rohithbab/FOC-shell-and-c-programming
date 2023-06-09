#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 2; i <= n; i += 2) {
        int term = i * i;  // Calculate the current term
        sum += term;
    }

    printf("Sum of the series: %d\n", sum);

    return 0;
}
