/*Пользователь вводит строку,  состоящую из слов, разделенных одним или несколькими пробелами.  Пробелы могут быть также в начале и в конце слова.

Сформируйте новую строку, в которой слова исходной строки разделены ровно одним пробелом. Пробелы в начале и в конце строки тоже должны быть удалены. Для проверки этого выведите строку, обрамленную "палочками".*/
#include <iostream>
#include <string.h>
using namespace std;
int main() {
    const int MAXLEN = 128;
    char str [MAXLEN];
    char finish[MAXLEN] = "|";

    fgets(str, MAXLEN, stdin);

    char* ptr;
    ptr = strtok(str, " ");
    while (ptr != NULL) { 
        strcat(finish, ptr);
        ptr = strtok(NULL, " ");
        if (ptr != NULL)
        {
            strcat(finish, " "); 
        }
    }
    strcat(finish, "|");
    puts(finish);

    return 0;
}