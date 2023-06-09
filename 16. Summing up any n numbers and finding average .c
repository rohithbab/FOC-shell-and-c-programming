	#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int num;
    int sum = 0;

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        sum += num;
    }

    double average = (double)sum / n;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
