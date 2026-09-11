#include <stdio.h>

int main()
{
    int age;
    int studentID;
    float examinationScore;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your student ID: ");
    scanf("%d", &studentID);

    printf("Enter your examination score: ");
    scanf("%f", &examinationScore);

    printf("\nStudent Information\n");
    printf("Age: %d\n", age);
    printf("Student ID: %d\n", studentID);
    printf("Score: %.2f\n", examinationScore);

    return 0;
}