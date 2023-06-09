#include <stdio.h>

#define MAX_ALUMNI 95

typedef struct {
    int age;
    char gender;
    char maritalStatus;
    char collegeMajor[50];
    float salary;
} Alumni;

float calculateAverageSalary(Alumni alumni[], int numAlumni, char item1[], char item2[]) {
    float totalSalary = 0.0;
    int count = 0;

    for (int i = 0; i < numAlumni; i++) {
        if (item1[0] == '\0' || strcmp(alumni[i].collegeMajor, item1) == 0) {
            if (item2[0] == '\0' || alumni[i].gender == item2[0]) {
                totalSalary += alumni[i].salary;
                count++;
            }
        }
    }

    return (count > 0) ? (totalSalary / count) : 0.0;
}

int main() {
    Alumni alumni[MAX_ALUMNI];
    int numAlumni;

    printf("Enter the number of alumni: ");
    scanf("%d", &numAlumni);

    printf("Enter alumni details:\n");
    for (int i = 0; i < numAlumni; i++) {
        printf("Alumni %d:\n", i + 1);

        printf("Age: ");
        scanf("%d", &alumni[i].age);

        printf("Gender (M/F): ");
        scanf(" %c", &alumni[i].gender);

        printf("Marital Status: ");
        scanf(" %c", &alumni[i].maritalStatus);

        printf("College Major: ");
        scanf("%s", alumni[i].collegeMajor);

        printf("Salary: $");
        scanf("%f", &alumni[i].salary);

        printf("\n");
    }

    char item1[50];
    char item2[50];

    printf("Enter the first item (College Major or leave blank for all): ");
    scanf("%s", item1);

    printf("Enter the second item (Gender or leave blank for all): ");
    scanf("%s", item2);

    float averageSalary = calculateAverageSalary(alumni, numAlumni, item1, item2);

    printf("\nAverage Salary: $%.2f\n", averageSalary);

    return 0;
}
