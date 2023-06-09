 #include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        int cube = i * i * i;  // Calculate the cube of the current number
        sum += cube;
    }

    printf("Sum of the cubes of numbers: %d\n", sum);

    return 0;
}
