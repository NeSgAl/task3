#include <stdio.h>
#include "hello_func.h"

void vis() {
    int god;
    printf("������� ���: ");
    scanf("%d", &god);

    if (god % 400 == 0)
    {
        printf("��� ����������\n");
    }
    else if (god % 100 == 0)
    {
        printf("��� ������������\n");
    }
    else if (god % 4 == 0)
    {
        printf("��� ����������\n");
    }
    else
    {
        printf("��� ������������\n");
    }
}