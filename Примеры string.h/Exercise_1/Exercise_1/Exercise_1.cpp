/*Пользователь вводит три строки, которые содержат части кодового слова. Каждая вводимая строка может содержать пробелы и заканчивается символом перехода на новую строку ('\n').

Части кодового слова выделены внутри строки знаками ';'. Нужно соединить эти части в одну строку и вывести эту строку на консоль. 

Замечание: поскольку предполагается, что кодовое слово будет как-то использовано в дальнейшем, недостаточно его просто вывести на консоль по частям. Нужно именно сформировать его в виде одной строки, а затем уже выводить!*/
#include <iostream>
#include <string.h>

using namespace std;

int main() {
    const int MAXLEN = 128;
    char s1[MAXLEN];
    char s2[MAXLEN];
    char s3[MAXLEN];
    char res[MAXLEN] = "";
   
    fgets(s1, MAXLEN, stdin);
    fgets(s2, MAXLEN, stdin);
    fgets(s3, MAXLEN, stdin);

    char* s1n, * s1k, * s2n, * s2k,* s3n,* s3k;

    s1n = strchr(s1, ';');
    s1k = strrchr(s1, ';');

    s2n = strchr(s2, ';');
    s2k = strrchr(s2, ';');

    s3n = strchr(s3, ';');
    s3k = strrchr(s3, ';');

    char* ptr = res;
    ptr = strncat(res, s1n + 1, s1k - s1n - 1);
    ptr = strncat(ptr, s2n + 1, s2k - s2n - 1);
    strncat(ptr, s3n + 1, s3k - s3n - 1);

    cout << res;
    return 0;
}