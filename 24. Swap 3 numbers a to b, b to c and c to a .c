#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Enter the value of c: ");
    scanf("%d", &c);

    printf("Before swapping: a = %d, b = %d, c = %d\n", a, b, c);

    // Swapping using temporary variables
    int temp;

    temp = a;
    a = b;
    b = c;
    c = temp;

    printf("After swapping: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
