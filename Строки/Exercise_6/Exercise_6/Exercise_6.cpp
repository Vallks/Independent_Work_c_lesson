/*Написать свою функцию копирования строк:

void mystrcpy(char* dest, char* source);
 Функция копирует содержимое строки source в начало строки dest (влючая нулевой байт). 

В функции main() демонстрируется работа этой функции: вводятся две строки, затем вторая строка копируется в первую, и они обе выводятся на консоль.*/
#include <iostream>
#include <string.h>

using namespace std;

void mystrcpy (char* s, char* t)
{   
    int i = 0;
    
    while ((s[i] = t[i]) != '\0') {
        i++;
    }
}

int main() {
    const int MAXLEN = 128;
    char s[MAXLEN];
    char t[MAXLEN];
    fgets(s, MAXLEN, stdin);
    fgets(t, MAXLEN, stdin);
    mystrcpy(s, t);
    printf("%s%s", s, t);
    return 0;
}