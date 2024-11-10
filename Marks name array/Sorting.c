#include <stdio.h>
#include <string.h>

#define SIZE 5

typedef struct {
    char name[50];
    int marks;
} Student;

void sortStudents(Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].marks < arr[j + 1].marks) {
                // Swap arr[j] and arr[j+1]
                Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    Student students[SIZE];

    // Read student names and marks
    printf("Enter the names and marks of %d students:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Student %d Name: ", i + 1);
        scanf("%s", students[i].name);
        printf("Student %d Marks: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    // Sort students by marks in descending order
    sortStudents(students, SIZE);

    // Print students in descending order of marks
    printf("\nStudents sorted by marks in descending order:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    return 0;
}
