//вариант 16
#include <stdio.h>
#include <ctype.h>

int main()
{   
    int s = 0;
    char a;

    while ((a = getchar()) != '#')
    {   
        if (isprint(a))
        {
            s++; 
        }
        
    }
    printf("Количество печатных символов: %d\n",s);

}