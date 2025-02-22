#include <iostream>
#include <stdio.h>


int main()
{
    setlocale(LC_ALL, "RU");
    int a;
    
    scanf_s( "%o", &a );

    printf("--------------------------------\n");
    printf("| десятичная        |%-10d|\n", a);
    printf("| восьмеричная      |%-10o|\n", a);
    printf("| шестнадцатеричная |%-10x|\n", a);
    printf("--------------------------------\n");

    return 0;
}