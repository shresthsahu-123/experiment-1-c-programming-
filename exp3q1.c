#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter the sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check triangle validity
    if ((a + b > c) && (b + c > a) && (a + c > b)) {
        printf("The triangle is valid.\n");

        // Check triangle type
        if (a == b && b == c)
            printf("The triangle is equilateral.\n");
        else if (a == b || b == c || a == c)
            printf("The triangle is isosceles.\n");
        else
            printf("The triangle is scalene.\n");

        // Check right angle using Pythagoras theorem
        if ((a*a + b*b == c*c) || (b*b + c*c == a*a) || (a*a + c*c == b*b))
            printf("The triangle is right-angled.\n");
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
