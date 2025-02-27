/*Напишите программу с использованием цикла while:

Пользователь вводит 6  целых чисел. Нужно определить количество нечетных чисел среди них. 

Нечетное число не делится нацело на 2, т.е. остаток от деления не равен 0.*/
#include <iostream>

using namespace std;

int main()
{
    int x;
    int sch = 0, count = 0;
    while (sch < 6)
    {
        cin >> x;
        if (x % 2 && x != 0)
        {
            count++;
        }
        sch++;
    }

    cout << count;

    return 0;
}

