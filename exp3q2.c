#include <stdio.h>

int main() {
    float weight, height, bmi;

    // Get user input for weight and height
    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);

    // Calculate BMI using the formula
    bmi = weight / (height * height);

    // Print the BMI value
    printf("BMI = %.2f\n", bmi);

    // Print the BMI Category according to standard ranges
    if (bmi < 18.5)
        printf("Category: Underweight\n");
    else if (bmi < 25)
        printf("Category: Normal weight\n");
    else if (bmi < 30)
        printf("Category: Overweight\n");
    else
        printf("Category: Obese\n");

    return 0;
}
