#include <stdio.h>

#define NUM_STUDENTS 25
#define NUM_TESTS 5

void printGrade(int grades[][NUM_TESTS], int student, int test) {
    int grade = grades[student - 1][test - 1];
    printf("Grade for student %d, test %d: %d\n", student, test, grade);
}

int main() {
    int grades[NUM_STUDENTS][NUM_TESTS];

    // Input grades for each student and test
    printf("Enter the grades for each student and test:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        for (int j = 0; j < NUM_TESTS; j++) {
            printf("Student %d, Test %d: ", i + 1, j + 1);
            scanf("%d", &grades[i][j]);
        }
    }

    // Prompt for student number and test number
    int student, test;
    printf("\nEnter the student number (1-25): ");
    scanf("%d", &student);
    printf("Enter the test number (1-5): ");
    scanf("%d", &test);

    // Print the grade for the entered student and test
    printGrade(grades, student, test);

    return 0;
}
