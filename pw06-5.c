//22 вариант
#include <stdio.h>
#include <math.h>

int main()
{

    int num=10;
    double chislo;

    while (num!=5)
    {
        printf("Калькулятор модуля:\n");
        printf("1. Модуль числа\n2. Знак числа (1/-1/0)\n3. Округление вверх\n4. Округление вниз\n5. Выход\n");
        printf("Выберите действие: ");
        
        scanf("%d", &num);
        switch(num)
        {
            case 1:
                printf("Введите число: ");
                scanf("%lf", &chislo);
                printf("Модуль числа: %.0lf\n", fabs(chislo));
                break;
            case 2:
                printf("Введите число: ");
                scanf("%lf", &chislo);
                if (chislo>0)
                {    
                    printf("Знак числа: 1\n");
                }
                else if (chislo<0)
                {
                    printf("Знак числа: -1\n");
                }
                else
                {
                    printf("Знак числа: 0\n");
                }
                break;
            case 3:
                printf("Введите число: ");
                scanf("%lf", &chislo);
                printf("Округление вверх: %.0lf\n", ceil(chislo));
                break;
            case 4:
                printf("Введите число: ");
                scanf("%lf", &chislo);
                printf("Округление вниз: %.0lf\n", floor(chislo));
                break;
            case 5:
                break;
            default:
                printf("Ошибка, выберите действие от 1 до 5\n");
                break;
        }
        while (getchar() != '\n'); // Очистка буфера ввода
            if (num < 5)
            {
                printf("Чтобы вернуться в меню, нажмите Enter");
                getchar(); // Ожидание нажатия клавиши
            }
        printf("\n");

    }
}