#include <stdio.h>

int main() {
    int numStudents = 200;
    int grades[numStudents];
    int i, countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;

    // Input grades for each student
    for (i = 0; i < numStudents; i++) {
        int studentNumber, numberGrade;
        
        printf("Enter student number for student %d: ", i + 1);
        scanf("%d", &studentNumber);
        
        printf("Enter number grade for student %d: ", i + 1);
        scanf("%d", &numberGrade);
        
        // Update grade counts
        if (numberGrade >= 90 && numberGrade <= 100) {
            countA++;
        } else if (numberGrade >= 78 && numberGrade <= 89) {
            countB++;
        } else if (numberGrade >= 65 && numberGrade <= 77) {
            countC++;
        } else if (numberGrade >= 50 && numberGrade <= 64) {
            countD++;
        } else {
            countF++;
        }
        
        grades[i] = numberGrade;
    }

    // Output student information and grade counts
    printf("\nStudent Grades:\n");
    for (i = 0; i < numStudents; i++) {
        printf("Student Number: %d\tNumber Grade: %d\n", i + 1, grades[i]);
    }

    printf("\nGrade Counts:\n");
    printf("A: %d\nB: %d\nC: %d\nD: %d\nF: %d\n", countA, countB, countC, countD, countF);

    return 0;
}
