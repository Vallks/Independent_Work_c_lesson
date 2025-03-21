﻿/*Одномерный массив из 10 элементов инициализировать случайными значениями от -20 до 20 
(начальное значение генератора случайных чисел запросить у пользователя).  Вывести исходный массив на консоль, отделяя элементы знаком табуляции.

Найти позиции самого левого и самого правого отрицательного элемента и отсортировать элементы между ними по возрастанию (неубыванию) произвольным способом.  Границы (сами найденные отрицательные элементы) тоже участвуют в сортировке.  В тестах гарантировано есть не менее двух отрицательных чисел в массиве.

Вывести преобразованный массив на консоль с новой строки, отделяя элементы знаком табуляции.*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int SIZE = 10;
    int ar[SIZE];
    int x;
    int min_indx = 0, max_indx = 0;

    cin >> x;
    srand(x);

    for (int i = 0; i < SIZE; i++)
    {
        ar[i] = rand() % 41 - 20;
        cout << ar[i] << "\t";
    }

    cout << endl;

    for (int i = 0; i < SIZE; i++)
    {
        if (ar[i] < 0)
        {
            min_indx = i;
            break;
        }
    }
    for (int i = SIZE - 1; i >=0 ; i--)
    {
        if (ar[i] < 0)
        {
            max_indx = i;
            break;
        }
    }

    for (int i = min_indx; i < max_indx ; i++)
    {
        int tmp = ar[i + 1];
        int j = i;
        while (j >= min_indx && ar[j] > tmp)
        {
            ar[j + 1] = ar[j];
            j--;
        }
        ar[j + 1] = tmp;
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << ar[i] << "\t";
    }

    return 0;
}

