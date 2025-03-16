/*Пользователь вводит строку, которая состоит из слов, разделенных одним или несколькими пробелами. Удалите из строки второе слово. Все пробелы должны остаться.

Преобразованная строка выводится на консоль.*/
#include <iostream>
#include <string.h>

using namespace std;

int main() {
    const int MAXLEN = 128;
    char str[MAXLEN];

    fgets(str, MAXLEN, stdin);
    char copyStr[MAXLEN];
    
    strcpy(copyStr, str); 
    char* ptr = strtok(copyStr, " ");
    ptr = strtok(NULL, " "); 
    
    int kolDo = ptr - copyStr; 
    int kolSim = strlen(ptr); 
    
    ptr = str + kolDo; 
    char* pt2 = ptr + kolSim; 
    while (*pt2 != '\0') {
        *ptr = *pt2;
        ptr++;
        pt2++;
    }
    *ptr = '\0';
    cout << str;
    return 0;
}