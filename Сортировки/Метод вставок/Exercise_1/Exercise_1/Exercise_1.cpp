/*Одномерный массив из 10 элементов инициализировать случайными значениями от 10 до 50 (начальное значение генератора случайных чисел запросить у пользователя). 

Выполнить сортировку этого массива по убыванию (невозрастанию ) методом вставок.

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
        ar[i] = rand() % 41 + 10;
    }

    for (int i = 0; i < SIZE - 1; i++)
    {
        int tmp = ar[i + 1];
        int j = i;
        while (j >= 0 && ar[j] < tmp)
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
