#include <stdio.h>
#include <math.h>

int main() {
    int terms;
    double base, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("Enter the base value: ");
    scanf("%lf", &base);

    for (int i = 0; i < terms; i++) {
        double term = pow(base, i) / tgamma(i + 1);
        sum += term;
    }

    printf("The sum of the exponential series is: %lf\n", sum);

    return 0;
}
