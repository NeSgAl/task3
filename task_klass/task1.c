#include <stdio.h>
#include <stdlib.h>

int main()
{
    int** a;
    int S;
    int B;
    int i;
    int j;
    printf("Введите количество строк\n");
    scanf("%d", &S);
    printf("Введите количество столбцов\n");
    scanf("%d", &B);
    a = (int**)malloc(B * sizeof(int));
    for (i = 0; i<S; i++);
    {
        for (int j = 0; j<B; j++)
        {    
            printf("Введите элемент:\n");
            scanf("%d", &a[i][j]);

        }
    }
    for (i = 0; i<S; i++);
    {
        for (j = 0; j<B; i++);
        {
            printf("%5d", a[S][B]);
        }
        printf("\n");
    }    

}