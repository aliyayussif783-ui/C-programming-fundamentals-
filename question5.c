#include <stdio.h>

int main()
{
    float firstNumber;
    float secondNumber;

    printf("Enter first number: ");
    scanf("%f", &firstNumber);

    printf("Enter second number: ");
    scanf("%f", &secondNumber);

    printf("Addition: %.2f\n", firstNumber + secondNumber);
    printf("Subtraction: %.2f\n", firstNumber - secondNumber);
    printf("Multiplication: %.2f\n", firstNumber * secondNumber);
    printf("Division: %.2f\n", firstNumber / secondNumber);

    return 0;
}