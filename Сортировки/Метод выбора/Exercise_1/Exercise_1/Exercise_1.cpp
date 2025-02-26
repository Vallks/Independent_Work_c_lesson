/*Одномерный массив из 10 элементов инициализировать случайными значениями от 1 до 20 (начальное значение генератора случайных чисел запросить у пользователя). 

Выполнить сортировку этого массива по убыванию (невозрастанию) методом выбора максимального элемента.

Вывести отсортированный массив на консоль, отделяя элементы знаком табуляции.*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int SIZE = 10;
    int ar[SIZE];
    int x;

    cin >> x;
    srand(x);

    for (int i = 0; i < SIZE; i++)
    {
        ar[i] = rand() % 20 + 1;
    }

    for (int i = 0; i < SIZE-1; i++)
    {
        int max = i;
        for (int j = i + 1; j < SIZE; j++)
        {
            if (ar[max] < ar[j])
            {
                max = j;
            }
        }
        int tmp = ar[i];
        ar[i] = ar[max];
        ar[max] = tmp;
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << ar[i] << "\t";
    }

    return 0;
}

