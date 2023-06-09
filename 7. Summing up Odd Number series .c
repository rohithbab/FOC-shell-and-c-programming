#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }

    printf("Sum of the odd number series: %d\n", sum);

    return 0;
}
