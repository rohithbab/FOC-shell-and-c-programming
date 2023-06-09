#include <stdio.h>
#include <string.h>

#define NUM_DEPARTMENTS 12
#define MAX_NAME_LENGTH 50

typedef struct {
    char name[MAX_NAME_LENGTH];
    char gender;
    int age;
    float wage;
    int department;
} Employee;

void analyzeWages(Employee employees[], int numEmployees) {
    float totalWageMen = 0.0;
    float totalWageWomen = 0.0;
    int countMen = 0;
    int countWomen = 0;

    for (int i = 0; i < numEmployees; i++) {
        if (employees[i].gender == 'M') {
            totalWageMen += employees[i].wage;
            countMen++;
        } else if (employees[i].gender == 'F') {
            totalWageWomen += employees[i].wage;
            countWomen++;
        }
    }

    float avgWageMen = totalWageMen / countMen;
    float avgWageWomen = totalWageWomen / countWomen;

    printf("Average wage of men: $%.2f\n", avgWageMen);
    printf("Average wage of women: $%.2f\n", avgWageWomen);
}

void analyzeDepartments(Employee employees[], int numEmployees) {
    int departmentCounts[NUM_DEPARTMENTS] = {0};

    for (int i = 0; i < numEmployees; i++) {
        departmentCounts[employees[i].department - 1]++;
    }

    printf("Number of employees in each department:\n");
    for (int i = 0; i < NUM_DEPARTMENTS; i++) {
        printf("Department %d: %d employees\n", i + 1, departmentCounts[i]);
    }
}

void analyzeGenderByDepartment(Employee employees[], int numEmployees) {
    int genderCounts[NUM_DEPARTMENTS][2] = {0};

    for (int i = 0; i < numEmployees; i++) {
        int department = employees[i].department - 1;
        if (employees[i].gender == 'M') {
            genderCounts[department][0]++;
        } else if (employees[i].gender == 'F') {
            genderCounts[department][1]++;
        }
    }

    printf("Number of men and women in each department:\n");
    for (int i = 0; i < NUM_DEPARTMENTS; i++) {
        printf("Department %d: Men: %d, Women: %d\n", i + 1, genderCounts[i][0], genderCounts[i][1]);
    }
}

int main() {
    int numEmployees;
    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    Employee employees[numEmployees];

    printf("Enter employee details:\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("Employee %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", employees[i].name);

        printf("Gender (M/F): ");
        scanf(" %c", &employees[i].gender);

        printf("Age: ");
        scanf("%d", &employees[i].age);

        printf("Wage: $");
        scanf("%f", &employees[i].wage);

        printf("Department (1-12): ");
        scanf("%d", &employees[i].department);

        printf("\n");
    }

    analyzeWages(employees, numEmployees);
    printf("\n");
    analyzeDepartments(employees, numEmployees);
    printf("\n");
    analyzeGenderByDepartment(employees, numEmployees);

    return 0;
}
