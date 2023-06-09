#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    long long factorial = 1;

    printf("Product series: ");
    for (int i = 1; i <= n; i++) {
        factorial *= i;
        printf("%lld ", factorial);
    }

    printf("\n");

    return 0;
}

