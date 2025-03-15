/*Вводится строка, которая может содержать пробелы. Удалите из нее все символы-цифры.  Распечатайте преобразованную строку.*/
#include <iostream>
#include <string.h>

using namespace std;

void replace(char* str, char* ptr)
{
    
    while (*ptr != '\0')
    {
        *ptr = *(ptr + 1);
        ptr++;
    }
   
    return;
}

int main() {
    char str[129];
    char* ptr;

    fgets(str, 129, stdin);
    ptr = str;

    while (*ptr != '\0')
    {
        if (*ptr >= '0' && *ptr <= '9')
        {
            replace(str, ptr);
        }
        else
        {
            ptr++;
        }
    }

    puts(str);
    return 0;
}
