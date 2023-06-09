#include <stdio.h>
#include <math.h>

int main() {
    int terms;
    double angle, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("Enter the angle in radians: ");
    scanf("%lf", &angle);

    for (int i = 1; i <= terms; i++) {
        double term = pow(-1, i - 1) * pow(angle, 2 * i - 1) / tgamma(2 * i);
        sum += term;
    }

    printf("The sum of the sine series is: %lf\n", sum);

    return 0;
}
