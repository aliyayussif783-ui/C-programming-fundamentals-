#include <stdio.h>

int main()
{
    float voltage;
    float current;
    float time;
    float power;
    float energy;

    printf("Enter voltage: ");
    scanf("%f", &voltage);

    printf("Enter current: ");
    scanf("%f", &current);

    printf("Enter time in hours: ");
    scanf("%f", &time);

    power = voltage * current;
    energy = power * time;

    printf("Power: %.2f W\n", power);
    printf("Energy: %.2f Wh\n", energy);

    return 0;
}