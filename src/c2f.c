#include <stdio.h>
#include "../inc/functions.h"


void c2f() 
{
    double c; 
    double f;

    printf("Enter celsius: ");
    scanf("%lf", &c);
    
    f = 9.0 / 5 * c + 32;
    printf("Farenheits: %f", f);
}