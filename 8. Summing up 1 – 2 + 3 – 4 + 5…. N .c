#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    int sum = 0;
    int sign = 1;

    for (int i = 1; i <= n; i++) {
        sum += sign * i;
        sign *= -1;
    }

    printf("Sum of the series: %d\n", sum);

    return 0;
}
