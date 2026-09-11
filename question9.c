#include <stdio.h>

int main()
{
    int number;
    int counter;

    printf("Enter number: ");
    scanf("%d", &number);

    for (counter = 1; counter <= 12; counter++)
    {
        printf("%d x %d = %d\n", number, counter, number * counter);
    }

    return 0;
}