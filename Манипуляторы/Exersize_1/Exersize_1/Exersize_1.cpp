/*Напишите программу, которая вводит целое число в восьмеричной системе счисления, а выводит его в десятичной системе счисления.*/
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    int a;

    cout << "Введите число!\n";

    cin >> oct >> a;

    cout << a;

    return 0;
}

