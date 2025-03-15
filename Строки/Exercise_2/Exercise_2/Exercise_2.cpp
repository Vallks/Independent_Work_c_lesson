/*Введите строку (в ней возможны пробелы). Максимальный размер строки - 100 символов.  Замените каждый символ «;»   на пару символов «.,» hello;; by!; ;;  в hello.,., by!., .,.,*/
#include <iostream>
#include <string.h>

using namespace std;

void replace(char* str, char* ptr)
{
    char* q = str + strlen(str);
    while (q > ptr)
    {
        *(q + 1) = *q;
        q--;
    }
    *ptr = '.';
    *(ptr + 1) = ',';

    return;
}

int main() {
    char str[100];
    char* ptr;

    fgets(str, 100, stdin);
    ptr = str;

    while (*ptr != '\0')
    {
        if (*ptr == ';')
        {
            replace(str, ptr);
        }
        ptr++;
    }

    puts(str);
    return 0;
}

