/*Пользователь вводит строку, которая состоит из слов, разделенных одним или несколькими пробелами. 
Пробелы могут быть также перед первым и после последнего слова. Найдите и распечатайте самое длинное слово. 
Если есть несколько слов максимальной длины, распечатайте первое из них.*/
#include <iostream>
#include <string.h>

using namespace std;

int main() {
    const int MAXLEN = 128;
    char str[MAXLEN];
    
    fgets(str, MAXLEN, stdin);
    
    //разбор строки на слова и формирование массива указателей на начала слов
    
    char* word = strtok(str, " \n");
    int kolslov = 0;
    char** ptrs = new char* [128];
    
    while (word != NULL) {
        ptrs[kolslov] = word;
        kolslov++;
        word = strtok(NULL, " \n");
    }
    
    //поиск слова максимальной длины
    int max = 0;
    int imax = 0;
    for (int i = 0; i < kolslov; i++) {
        if (strlen(ptrs[i]) > max) {
            max = strlen(ptrs[i]);
            imax = i;
        }
    }
    cout << ptrs[imax];
    return 0;
}