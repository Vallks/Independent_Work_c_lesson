/*Напишите программу, которая выводит на консоль строки:

I study programming language C\C++

Я изучаю язык программирования "C++"*/

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");

    cout << "I study programming language C\\C++\n";
    cout << "\Я изучаю язык программирования \"C++\"";

    return 0;
}