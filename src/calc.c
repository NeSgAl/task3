#include <stdio.h>
#include "../inc/functions.h"


void calc() 
{
    float zn;
    float zna;
    char i;

    printf("Enter equation:\n");
    scanf("%f %c %f", &zn, &i, &zna);
    
    switch(i)
    {
        case '+':
            printf("%.2f\n", zn + zna );
            break;
        case '-':
            printf("%.2f\n", zn - zna);
            break;
        case '*':
            printf("%.2f\n", zn * zna);
            break;
        case '/':
            if (zna == 0)
                printf("error\n");
            else
                printf("%.2f\n", zn / zna); 

            break;
        default:
            printf("no choise\n");
    } 
}
