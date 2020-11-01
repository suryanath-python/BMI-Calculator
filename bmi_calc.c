#include <stdio.h>

int main()
{
    float height, weight, bmi;
    printf("Enter your height in meter: ");
    scanf("%f", &height);
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);
    bmi = weight / (height * height);
    printf("\nYour bmi is %f\n", bmi);

    if (bmi <= 18.5)
    {
        printf("You are underweight you need to gain weight\n");
    }

    else if (bmi > 18.5 && bmi <= 24.9)
    {
        printf("Your weight is normal\n");
    }

    else if (bmi > 24.9 && bmi <= 29.9)
    {
        printf("You are overheight but not obese\n");
    }

    else if (bmi > 29.9 && bmi <= 34.9)
    {
        printf("You are having first stage obesity, you should defenitely loose weight\n");
    }

    else if (bmi > 34.9 && bmi <= 39.9)
    {
        printf("You are having second stage obesity and it is a critical stage you should loose more than 10kg weight\n");
    }

    else
    {
        printf("You are at the topmost stage of obesity you should consult a doctor as fast as possible\n");
    }

    return 0;
}
