#include <stdio.h>

int main()
{
    int numberOfStudents;
    int studentNumber;
    float score;
    int passed = 0;
    int failed = 0;

    printf("How many students? ");
    scanf("%d", &numberOfStudents);

    for (studentNumber = 1; studentNumber <= numberOfStudents; studentNumber++)
    {
        printf("Student %d score: ", studentNumber);
        scanf("%f", &score);

        while (score < 0 || score > 100)
        {
            printf("Invalid score. Enter a score between 0 and 100: ");
            scanf("%f", &score);
        }

        if (score >= 50)
        {
            printf("PASS\n");
            passed++;
        }
        else
        {
            printf("FAIL\n");
            failed++;
        }
    }

    printf("\nPassed: %d\n", passed);
    printf("Failed: %d\n", failed);

    return 0;
}