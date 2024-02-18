#include <stdio.h>
#include <locale.h>
#include "../inc/functions.h"


int main()
{
    setlocale(LC_ALL, "");

    int menu;
    printf(
        "Menu:\n" \
        "1. celsius to farenhein\n" \
        "2. solve equation\n" \
        "3. calculator\n"\
        "> "
    );
    scanf("%d", &menu);

    switch(menu)
    {
        case 1:
            c2f();
            break;
        case 2:
            dis1();
            break;
        case 3:
            calc();
            break;
        default:
            printf("no choise\n");
    }
} 



        
// int main() {
    // Циклы
    // 1.1
    // когда не знаем сколько итераций
    // while (true) 
    // {

    // }

    // 1.2
    // do {

    // } while (true);

    // 2
    // когда знаем точное кол-во итераций
    // for (size_t i = 0; i < count; i++)
    // {
        
    // }

    // Условия
    // if - конструкция




    // switch & if
    // int menu = 2;

    // switch (menu)
    // {
    //     case 1:
    //         printf("1\n");
    //     break;

    //     case 2:
    //         printf("2\n");
    //         // hello();
    //     // break;

    //     case 3:
    //     case 5:
    //         printf("5\n");

    //     // case 3:
    //     //     printf("3\n");
    //     break;
    
    //     default:
    //         printf("no choise\n");
    //     break;
    // }



    // тернарный оператор
    // (условие) ? [да] : [нет]
    // int main = 3 < 1 ? 100 : -100;

    // // if (hello())
    // //     printf("%d\n", main);

    // if (3 < 1 ? hello() : 0)
    //     printf("%d\n", main);



//     // области видимости
//     if (1) 
//         printf("1\n");

//     int num = 100;

//     {
//         int num = 2;
//         printf("%d\n", num);
//     }

//     printf("%d\n", num);
// }