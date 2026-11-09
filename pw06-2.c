//вариант 6
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main()
{   
    int sa=0;
    int se=0;
    setlocale(LC_ALL, "");
    wchar_t a;
    while ((a = getwchar()) != L'#')
    {
        if (a==L'а')
        {
            sa++;
        }
        if (a==L'е')
        {
            se++;
        }

    }
    printf("Количество символов 'а': %d\n", sa);
    printf("Количество символов 'е': %d\n", se);

}