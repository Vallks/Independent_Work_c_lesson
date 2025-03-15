/*Введите строку (в ней возможны пробелы). Максимальный размер строки - 100 символов.  
Замените каждую пару символов «.,»   на  символ «;» (отдельно  стоящий символ «.» или «,» трогать не нужно). Hello.,. world.., By.,.,-by, в Hello;. world.; By;;-by,*/
#include <iostream>
#include <string.h>

using namespace std;

void replace(char* str, char* ptr)
{
    char* pt = ptr;
    while (*ptr != '\0')
    {
       *ptr = *(ptr + 1);
        ptr++;
    }
    *pt = ';';
     
    return;
}

int main() {
    char str[100];
    char* ptr;

    fgets(str, 100, stdin);
    ptr = str;

    while (*ptr != '\0')
    {
        if (*ptr == '.' && *(ptr + 1) == ',')
        {
            replace(str, ptr);
        }
        ptr++;
    }

    puts(str);
    return 0;
}
