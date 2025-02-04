#include <stdio.h>

int main() {
    float marks;
    char grade;

    // Input marks from the user
    printf("Enter marks (0-100): ");
    scanf("%f", &marks);

    // Calculate grade
    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'C';
    } else if (marks >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Output the grade
    printf("Grade: %c\n", grade);
    
    return 0;
}
