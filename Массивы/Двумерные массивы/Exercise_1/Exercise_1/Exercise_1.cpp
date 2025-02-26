/*Элементы двумерного массива из 3 строк и 4 столбцов заполнить случайными целыми значениями от 10 до 30 (начальное значение генератора запросить у пользователя). 
Вывести исходный массив в виде матрицы. В строке элементы разделять знаком табуляции.

Затем обнулить вторую строку (с индексом 1) и вывести измененный массив. */

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int ROW = 3;
    const int COL = 4;

    int ar[ROW][COL];

    int x;

    cin >> x;

    srand(x);

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            ar[i][j] = rand() % 21 + 10;
            cout << ar[i][j] << "\t";
        }
        cout << endl;
    }
   
    for (int i = 0; i < COL; i++)
    {
        ar[1][i] = 0;
    }

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << ar[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}