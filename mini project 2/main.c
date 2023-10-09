#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 20

// Structure to store student information
struct Student {
    char name[50];
    float score;
};

// Function to swap two students
void swap(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort students by their scores in descending order
void sortStudents(struct Student students[], int numStudents) {
    for (int i = 0; i < numStudents - 1; i++) {
        for (int j = 0; j < numStudents - i - 1; j++) {
            if (students[j].score < students[j + 1].score) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

int main() {
    struct Student students[MAX_STUDENTS];
    int numStudents;

    printf("Enter the number of students (up to %d): ", MAX_STUDENTS);
    scanf("%d", &numStudents);

    if (numStudents < 1 || numStudents > MAX_STUDENTS) {
        printf("Invalid number of students. Please enter a number between 1 and %d.\n", MAX_STUDENTS);
        return 1;
    }

    // Input student names and scores
    for (int i = 0; i < numStudents; i++) {
        printf("Enter the name of student #%d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter the test score for %s: ", students[i].name);
        scanf("%f", &students[i].score);
    }

    // Calculate the average score
    float totalScore = 0;
    for (int i = 0; i < numStudents; i++) {
        totalScore += students[i].score;
    }
    float averageScore = totalScore / numStudents;

    printf("The average score is: %.2f\n", averageScore);
    printf("Students below the average score:\n");

    // Sort students by score
    sortStudents(students, numStudents);

    // Output students below average
    for (int i = 0; i < numStudents; i++) {
        if (students[i].score < averageScore) {
            printf("%s (Score: %.2f)\n", students[i].name, students[i].score);
        } else {
            break; // The list is sorted, so we can break early
        }
    }

    printf("The highest test score is: %.2f\n", students[0].score);
    printf("The top student is %s with a score of %.2f. Congratulations!\n", students[0].name, students[0].score);

    return 0;
}
