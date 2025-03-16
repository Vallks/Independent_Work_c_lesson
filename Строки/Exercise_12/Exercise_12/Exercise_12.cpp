/*Пользователь вводит строку, которая состоит из слов, разделенных одним или несколькими пробелами.

Распечатайте все слова-палиндромы, которые встречаются  в данной строке. Палиндромом называется слово или фраза, которые одинаково читаются слева направо и справа налево. 
Например: deed (подвиг), level (уровень), sagas (саги, сказания).

Все прописные буквы перед проверкой переведите в строчные. Для этого можно использовать функцию int tolower(int c), которая преобразует символ к нижнему регистру.*/
#include <iostream>
#include <string.h>

using namespace std;

bool palindrom(char* st) {
    
    char* pend = st + strlen(st) - 1;
    
    while (st <= pend) {
    
        if (*st != *pend)
        {
            return false;
        }
        st++;
        pend--;
    }

    return true;
}
void toLowerStr(char* st) {
    
    while (*st != '\0') 
    {
        *st = tolower(*st);
        st++;
    }
   
    return;
}
int main() {
    const int MAXLEN = 128;
    char str[MAXLEN];
    
    fgets(str, MAXLEN, stdin);
    
    char* ptr = strtok(str, " \n");
    
    while (ptr != NULL) 
    {
    
        toLowerStr(ptr);
        
        if (palindrom(ptr)) 
        {
            cout << ptr << endl;
        }
        ptr = strtok(NULL, " \n");
    }
   
    return 0;
}