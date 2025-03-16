/*Пользователь вводит строку, которая состоит из слов, разделенных одним или несколькими пробелами. Пробелы могут быть также перед первым и после последнего слова. С новой строки он вводит символ.

Найдите и распечатайте все слова, которые начинаются на этот символ. Каждое слово выводится с новой строки.*/
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    const int MAXLEN = 129;
    char str[MAXLEN];
    char c;

    fgets(str, MAXLEN, stdin);
    cin >> c;

    char* ptr;
    ptr = strtok(str, " ");
    while (ptr != NULL) {

        if (*ptr == c)
        {
            cout << ptr << endl;
        }

        ptr = strtok(NULL, " ");
        if (*ptr != NULL)
        {

        }
    }

    return 0;
}