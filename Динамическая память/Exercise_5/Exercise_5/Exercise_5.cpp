/*У пользователя запрашиваются размеры двумерного массива и начальное значение генератора случайных чисел 
(данные вводятся через пробел: сначала количество строк, потом столбцов, а потом число для инициализации генератора).

Нужно заполнить массив случайными числами от -5 до 5 и вывести массив на консоль в виде таблицы (элементы в строке отделяются знаками табуляции). 
С новой строки консоли вывести максимальные элементы  всех строк массива через пробел.*/
#include <iostream>
#include <cstdlib>

using namespace std;

void initAr(int** ar, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            ar[i][j] = rand() % 11 - 5;
        }
    }
}

void printAr(int** ar, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << ar[i][j] << "\t";
        }
        cout << endl;
    }
}

void prinMaxInRow(int** ar, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        int max = ar[i][0];

        for (int j = 0; j < c; j++)
        {
            if (ar[i][j] > max)
            {
                max = ar[i][j];
            }
        }

        cout << max << " ";
    }
}

int main() {
    int r, c, x;

    cin >> r >> c >> x;
    srand(x);

    int** ptr = new int* [r];

    for (int i = 0; i < r; i++)
    {
        ptr[i] = new int[c];
    }

    initAr(ptr, r, c);
    printAr(ptr, r, c);
    prinMaxInRow(ptr, r, c);

    for (int i = 0; i < r; i++)
    {
        delete[] ptr[i];
    }
    delete[] ptr;

    return 0;
}