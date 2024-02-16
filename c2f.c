#include <stdio.h>
#include "hello_func.h"

void c2f() {
    double c; 
    double f;
    printf("������� ������� �������: ");
    scanf("%lf", &c);
    // printf("%d", c);
    f = 9.0 / 5 * c + 32;
    printf("����������: %f", f);
}