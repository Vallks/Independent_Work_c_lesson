/*Введите и выведите строку, которая может содержать пробелы. Максимально возможная длина строки  30  символов.
puts("Hello, world!");
char name[]="Kirill";
cout<<"Привет, "<<name<<"\n";
printf("Привет, %s\n",name);

stdio.h
scanf("%s",name); но тогда define _CRT_SECURE_NO_WARNINGS
scanf_s("%s",name,MAXLEN); - не введет если превышение
fgets(name, MAXLEN, stdin); -введет если превышение до превышения но перевод строки не игнорируется

 scanf_s("%*[^\n]"); и while (cin.get() != '\n'); чистят буфер
*/
#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);  //на ввод
    SetConsoleOutputCP(1251); //на вывод

    char str[31];
    fgets(str, 31, stdin);
    scanf_s("%*[^\n]");
    puts(str);
    return 0;
}