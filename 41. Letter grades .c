#include <stdio.h>

int main() {
    int numCourses;
    float totalGradePoints = 0, totalCredits = 0, gradeAverage;

    // Input the number of courses
    printf("Enter the number of courses: ");
    scanf("%d", &numCourses);

    // Calculate the grade average for each course
    for (int i = 1; i <= numCourses; i++) {
        char grade;
        int credits;
        
        // Input the letter grade and credits for the course
        printf("Enter the letter grade for course %d: ", i);
        scanf(" %c", &grade);
        
        printf("Enter the number of credits for course %d: ", i);
        scanf("%d", &credits);
        
        // Calculate grade points based on the letter grade
        float gradePoints;
        switch (grade) {
            case 'A':
                gradePoints = 4;
                break;
            case 'B':
                gradePoints = 3;
                break;
            case 'C':
                gradePoints = 2;
                break;
            case 'D':
                gradePoints = 1;
                break;
            case 'F':
                gradePoints = 0;
                break;
            default:
                printf("Invalid letter grade entered for course %d. Skipping...\n", i);
                continue;
        }
        
        // Calculate the total grade points and credits
        totalGradePoints += gradePoints * credits;
        totalCredits += credits;
    }

    // Calculate the grade average
    gradeAverage = totalGradePoints / totalCredits;

    // Output the grade average
    printf("Grade Average: %.2f\n", gradeAverage);

    return 0;
}
