#include <stdio.h>

int main()
{
    float score;
    char grade;

    printf("Enter score: ");
    scanf("%f", &score);

    if (score < 0 || score > 100)
    {
        printf("Invalid score\n");
    }
    else if (score >= 80)
    {
        grade = 'A';
    }
    else if (score >= 70)
    {
        grade = 'B';
    }
    else if (score >= 60)
    {
        grade = 'C';
    }
    else if (score >= 50)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    if (score >= 0 && score <= 100)
    {
        printf("Score: %.2f\n", score);
        printf("Grade: %c\n", grade);
    }

    return 0;
}