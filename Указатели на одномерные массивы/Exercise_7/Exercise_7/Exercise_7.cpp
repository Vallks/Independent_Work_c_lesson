﻿/*Массив из двадцати элементов заполнить случайными числами от -1 до 1 (начальное значение генератора случайных чисел запросить у пользователя). 
Вывести исходный массив на консоль, отделяя элементы пробелами. Пробел должен быть и после последнего элемента.

Пользуясь указателями, найти максимальное количество подряд идущих нулей. Результат вывести на консоль с новой строки.*/
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    const int S = 20;
    int ar[S], cnt = 0, cntm = 0, x;
    int* ptr = ar;

    cin >> x;
    srand(x);

    for (int i = 0; i < S; i++,ptr++)
    {
        *ptr = rand() % 3 - 1;
        cout << *ptr << " ";
    }

    cout << endl;
    ptr = ar;

    for (int i = 0; i < S; i++, ptr++)
    {
        if (*ptr == 0)
        {
            cnt++;

            if (cnt > cntm)
            {
                cntm++;
            }
        }
        else
        {
            cnt = 0;
        }
    }

    cout << cntm;

    return 0;
}