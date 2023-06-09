#include <stdio.h>
#include <string.h>

#define NUM_STUDENTS 5
#define MAX_NAME_LENGTH 50

void printStudentScores(char names[][MAX_NAME_LENGTH], int scores[][4], int numStudents, char* searchName) {
    int found = 0;
    for (int i = 0; i < numStudents; i++) {
        if (strcmp(names[i], searchName) == 0) {
            printf("Student Name: %s\n", names[i]);
            printf("Test Scores: ");
            for (int j = 0; j < 4; j++) {
                printf("%d ", scores[i][j]);
            }
            printf("\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student not found.\n");
    }
}

int main() {
    char names[NUM_STUDENTS][MAX_NAME_LENGTH];
    int scores[NUM_STUDENTS][4];

    // Input student names and test scores
    printf("Enter the student names and test scores:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d name: ", i + 1);
        scanf("%s", names[i]);

        printf("Test scores for %s: ", names[i]);
        for (int j = 0; j < 4; j++) {
            scanf("%d", &scores[i][j]);
        }
        printf("\n");
    }

    // Prompt for student name to search
    char searchName[MAX_NAME_LENGTH];
    printf("Enter the student name to search: ");
    scanf("%s", searchName);

    // Print student scores if found
    printStudentScores(names, scores, NUM_STUDENTS, searchName);

    return 0;
}
