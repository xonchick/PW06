//18 вариант
#include <stdio.h>

int main()
{
    int a;
    double soskid;
    scanf("%d", &a);
    
    
    if (a>1000)
    {
        soskid=(double)a - ((double)a*15/100);
        printf("Скидка 15%%, цена со скидкой: %.2f\n", soskid);
    }
    else if (a>500)
    {
        soskid=(double)a - ((double)a*10/100);
        printf("Скидка 10%%, цена со скидкой: %.2f\n", soskid);
    }
    else if (a>100)
    {
        soskid=(double)a - ((double)a*5/100);
        printf("Скидка 5%%, цена со скидкой: %.2f\n", soskid);
    }
    else
    {
        printf("Скидки нет, цена: %d\n", a);
    }

}