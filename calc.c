#include <stdio.h>
#include "hello_func.h"

void calc() {
    float zn;
    float zna;
    char i;
    printf("������� ���������:\n");
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
            printf("%.2f\n", zn / zna); 
            break;
        default:
            printf("no choise\n");
    } 
    // (zna == 0)
    // {
    //     printf("������\n");
    // }
    // else if (i == '-')
    // {
    //     printf("%.2f\n", zn - zna);
    // }
    // else if (i == '*')
    // {
    //     printf("%.2f\n", zn * zna);
    // }
    // else if (i == '+')
    // {
    //     printf("%.2f\n", zn + zna );
    // }
    // else  if (i == '/')  
    // {
    //     printf("%.2f\n", zn / zna); 
    // }
}