#include <stdio.h>

double calculateGradePoints(char grade) {
    double gradePoints;
    switch (grade) {
        case 'A':
            gradePoints = 4.0;
            break;
        case 'B':
            gradePoints = 3.0;
            break;
        case 'C':
            gradePoints = 2.0;
            break;
        case 'D':
            gradePoints = 1.0;
            break;
        case 'F':
            gradePoints = 0.0;
            break;
        default:
            gradePoints = 0.0;
            break;
    }
    return gradePoints;
}

int main() {
    char courseName[50];
    char grade;
    int creditHours;
    int totalCreditHours = 0;
    double totalGradePoints = 0.0;
    double gpa;

    printf("Enter course information:\n");
    while (1) {
        printf("Course name (or 'q' to quit): ");
        scanf("%s", courseName);
        if (courseName[0] == 'q') {
            break;
        }
        printf("Grade: ");
        scanf(" %c", &grade);
        printf("Credit hours: ");
        scanf("%d", &creditHours);

        totalCreditHours += creditHours;
        totalGradePoints += calculateGradePoints(grade) * creditHours;
    }

    gpa = totalGradePoints / totalCreditHours;

    printf("\nGrade Point Average (GPA): %.2lf\n", gpa);

    return 0;
}
