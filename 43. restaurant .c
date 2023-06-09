#include <stdio.h>
#include <math.h>

#define HOURS_PER_DAY 24
#define MIN_EMPLOYEES 3
#define EMPLOYEES_PER_CUSTOMERS 20
#define NUM_DAYS 14

int main() {
    int averageCustomers[HOURS_PER_DAY];
    int neededEmployees[HOURS_PER_DAY];

    // Input average number of customers for each hour over 14 days
    printf("Enter the average number of customers for each hour over 14 days:\n");
    for (int hour = 0; hour < HOURS_PER_DAY; hour++) {
        scanf("%d", &averageCustomers[hour]);
    }

    // Calculate needed number of employees per hour
    for (int hour = 0; hour < HOURS_PER_DAY; hour++) {
        int totalCustomers = 0;
        for (int i = 0; i < NUM_DAYS; i++) {
            totalCustomers += averageCustomers[hour + i * HOURS_PER_DAY];
        }
        int average = totalCustomers / NUM_DAYS;

        if (average <= EMPLOYEES_PER_CUSTOMERS) {
            neededEmployees[hour] = MIN_EMPLOYEES;
        } else {
            int employees = ceil(average / (float)EMPLOYEES_PER_CUSTOMERS) + MIN_EMPLOYEES;
            neededEmployees[hour] = employees;
        }
    }

    // Output needed number of employees per hour
    printf("\nNeeded number of employees per hour:\n");
    for (int hour = 0; hour < HOURS_PER_DAY; hour++) {
        printf("Hour %d: %d employees\n", hour, neededEmployees[hour]);
    }

    return 0;
}
