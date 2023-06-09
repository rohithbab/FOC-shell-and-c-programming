#include <stdio.h>

#define MAX_CLASS_SIZE 35
#define NUM_QUESTIONS 20

int main() {
    int correctScores[NUM_QUESTIONS];
    int studentIDs[MAX_CLASS_SIZE];
    int numCorrect[MAX_CLASS_SIZE];
    char grades[MAX_CLASS_SIZE];
    int numStudents;
    int bestScore = 0;

    // Input correct scores
    printf("Enter the correct scores for each question:\n");
    for (int i = 0; i < NUM_QUESTIONS; i++) {
        scanf("%d", &correctScores[i]);
    }

    // Input number of students (class size)
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Calculate scores for each student
    for (int i = 0; i < numStudents; i++) {
        // Input student's ID
        printf("Enter the ID for student %d: ", i + 1);
        scanf("%d", &studentIDs[i]);

        // Input student's answers and calculate the number of correct answers
        printf("Enter the answers (0 for False, 1 for True) for student %d:\n", i + 1);
        numCorrect[i] = 0;
        for (int j = 0; j < NUM_QUESTIONS; j++) {
            int answer;
            scanf("%d", &answer);
            if (answer == correctScores[j]) {
                numCorrect[i]++;
            }
        }

        // Update the bestScore if necessary
        if (numCorrect[i] > bestScore) {
            bestScore = numCorrect[i];
        }
    }

    // Calculate grades for each student based on the bestScore
    for (int i = 0; i < numStudents; i++) {
        if (numCorrect[i] > bestScore - 2) {
            grades[i] = 'A';
        } else if (numCorrect[i] > bestScore - 4) {
            grades[i] = 'B';
        } else if (numCorrect[i] > bestScore - 6) {
            grades[i] = 'C';
        } else if (numCorrect[i] > bestScore - 8) {
            grades[i] = 'D';
        } else {
            grades[i] = 'F';
        }
    }

    // Output student information and bestScore
    printf("\nStudent Grades:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student ID: %d\n", studentIDs[i]);
        printf("Number Correct: %d\n", numCorrect[i]);
        printf("Grade: %c\n\n", grades[i]);
    }

    printf("Best Score: %d\n", bestScore);

    return 0;
}
