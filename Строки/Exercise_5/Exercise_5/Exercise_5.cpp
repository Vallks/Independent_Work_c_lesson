/*Напишите функцию  bool findend(char *s, char *t), которая возвращает true, если строка t присутствует в конце строки s, и false - в противном случае. 
Если длина строки t больше длины строки s, то результат false.

В функции main тестируется использование этой функции. Вводятся две строки и выводится Yes, если результат функции true, и No в противном случае.

Замечание. Можно использовать стандартную функцию определения длины строки (strlen).*/
#include <iostream>
#include <string.h>
using namespace std;

bool findend(char* s, char* t)
{
    if (strlen(t) > strlen(s))
    {
        return false;
    }

    char* ptr = s + strlen(s) - strlen(t);

    while (*ptr != '\0' && *t != '\0')
    {
        if (*ptr != *t)
        {
            return false;
        }
        ptr++;
        t++;
    }

    return true;
}

int main() {
    const int MAXLEN = 128;
    char s[MAXLEN];
    char t[MAXLEN];
    fgets(s, MAXLEN, stdin);
    fgets(t, MAXLEN, stdin);
    if (findend(s, t)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}
