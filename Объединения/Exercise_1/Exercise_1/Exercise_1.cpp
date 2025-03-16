/*Пользователь вводит вещественное число, которое размещается в переменной типа double. 
Нужно вывести на консоль внутреннее представление всех байтов этого числа в шестнадцатеричной системе счисления. 
Байты отделять пробелами. 

Использовать объединения! */
#include <iostream>
using namespace std;
int main() {
    union myUnion
    {
        double d;
        unsigned char c[8];
    } myU;

    cin >> myU.d;

    for (int i = 0; i < 8; i++)
    {
        cout << hex << (int)myU.c[i] << " ";
    }

    return 0;
}