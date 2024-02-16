#include <stdio.h>
#include <math.h>
void dis1()
{
    float a,b,c;
    float D,x1,x2,x;

    printf("Введите a:\n");
    scanf("%f", &a);

    printf("Введите b:\n");
    scanf("%f", &b);

    printf("Введите c:\n");
    scanf("%f", &c);

    D = b * b - 4 * a * c;

    if (D>0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        printf("x1=%.2f and x2=%.2f", x1, x2);
    }
    else if (D= 0)
    {
        x = (b * (-1)) / (2 * a);
        printf("x = %.2f", x);
    }
    else
    {
            printf("Ошибка\n");
    }
}