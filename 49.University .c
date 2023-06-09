#include <stdio.h>

#define MAX_STUDENTS 1200
#define MAX_MAJORS 7

typedef struct {
    int level;
    int major;
} Student;

void countStudentsByLevel(Student students[], int numStudents, int levelCounts[]) {
    for (int i = 0; i < numStudents; i++) {
        int level = students[i].level;
        levelCounts[level]++;
    }
}

void countStudentsByMajor(Student students[], int numStudents, int majorCounts[]) {
    for (int i = 0; i < numStudents; i++) {
        int major = students[i].major;
        majorCounts[major]++;
    }
}

void countStudentsByLevelAndMajor(Student students[], int numStudents, int levelMajorCounts[][MAX_MAJORS]) {
    for (int i = 0; i < numStudents; i++) {
        int level = students[i].level;
        int major = students[i].major;
        levelMajorCounts[level][major]++;
    }
}

int main() {
    Student students[MAX_STUDENTS];
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    printf("Enter student details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);

        printf("Class Level (1-4 for undergraduate, 5 for graduate): ");
        scanf("%d", &students[i].level);

        printf("Major (0-6 or -1 if not chosen): ");
        scanf("%d", &students[i].major);

        printf("\n");
    }

    int levelCounts[5] = {0};
    int majorCounts[MAX_MAJORS] = {0};
    int levelMajorCounts[5][MAX_MAJORS] = {0};

    countStudentsByLevel(students, numStudents, levelCounts);
    countStudentsByMajor(students, numStudents, majorCounts);
    countStudentsByLevelAndMajor(students, numStudents, levelMajorCounts);

    printf("\nStudent counts by class level:\n");
    for (int i = 1; i <= 4; i++) {
        printf("Level %d: %d\n", i, levelCounts[i]);
    }
    printf("Graduate: %d\n", levelCounts[5]);

    printf("\nStudent counts by major:\n");
    for (int i = 0; i < MAX_MAJORS; i++) {
        printf("Major %d: %d\n", i, majorCounts[i]);
    }

    printf("\nStudent counts by class level and major:\n");
    for (int i = 1; i <= 4; i++) {
        printf("Level %d:\n", i);
        for (int j = 0; j < MAX_MAJORS; j++) {
            printf("  Major %d: %d\n", j, levelMajorCounts[i][j]);
        }
    }
    printf("Graduate:\n");
    for (int j = 0; j < MAX_MAJORS; j++) {
        printf("  Major %d: %d\n", j, levelMajorCounts[5][j]);
    }

    return 0;
}
