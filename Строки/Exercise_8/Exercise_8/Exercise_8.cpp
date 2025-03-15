/*Вводится строка, которая может содержать пробелы. Все символы-цифры, которые в ней встречаются, замените символом '0'.  Распечатайте преобразованную строку.

Во всех задачах, где не уточняется размер строки, считайте его равным 128.*/
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str[129];
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            str[i] = '0';
        }
        i++;
    }

    cout << str;
    return 0;
}

