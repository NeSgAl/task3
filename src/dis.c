#include <stdio.h>
#include "../inc/functions.h"


void dis1()
{
    float a, b, c;
    float D, x1, x2, x;

    printf("Enter a:\n");
    scanf("%f", &a);

    printf("Enter b:\n");
    scanf("%f", &b);

    printf("Enter c:\n");
    scanf("%f", &c);

    D = b * b - 4 * a * c;

    if (D > 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        printf("x1=%.2f and x2=%.2f\n", x1, x2);
    }
    else if (D == 0)
    {
        x = (b * -1) / (2 * a);
        printf("x = %.2f\n", x);
    }
    else
    {
        printf("Error\n");
    }
}