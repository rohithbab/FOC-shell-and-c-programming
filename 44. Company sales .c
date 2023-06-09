#include <stdio.h>

#define NUM_SALESPERSON 10
#define NUM_DAYS 7

void calculateSalesData(float sales[][NUM_DAYS], float salespersonAvg[], float dailyTotal[], float *weeklyTotal) {
    for (int i = 0; i < NUM_SALESPERSON; i++) {
        float salespersonTotal = 0;
        for (int j = 0; j < NUM_DAYS; j++) {
            salespersonTotal += sales[i][j];
            dailyTotal[j] += sales[i][j];
        }
        salespersonAvg[i] = salespersonTotal / NUM_DAYS;
        *weeklyTotal += salespersonTotal;
    }
}

int main() {
    float sales[NUM_SALESPERSON][NUM_DAYS];
    float salespersonAvg[NUM_SALESPERSON];
    float dailyTotal[NUM_DAYS] = {0};
    float weeklyTotal = 0;

    // Input sales data for each salesperson
    printf("Enter the sales data for each salesperson:\n");
    for (int i = 0; i < NUM_SALESPERSON; i++) {
        printf("Salesperson %d:\n", i + 1);
        for (int j = 0; j < NUM_DAYS; j++) {
            printf("Day %d: $", j + 1);
            scanf("%f", &sales[i][j]);
        }
        printf("\n");
    }

    // Calculate sales data
    calculateSalesData(sales, salespersonAvg, dailyTotal, &weeklyTotal);

    // Output average dollar amount of sales for each salesperson
    printf("\nAverage dollar amount of sales for each salesperson:\n");
    for (int i = 0; i < NUM_SALESPERSON; i++) {
        printf("Salesperson %d: $%.2f\n", i + 1, salespersonAvg[i]);
    }

    // Output total dollar amount of sales for each day
    printf("\nTotal dollar amount of sales for each day:\n");
    for (int j = 0; j < NUM_DAYS; j++) {
        printf("Day %d: $%.2f\n", j + 1, dailyTotal[j]);
    }

    // Output total dollar amount of sales for the week
    printf("\nTotal dollar amount of sales for the week: $%.2f\n", weeklyTotal);

    return 0;
}
