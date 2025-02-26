/*Элементы квадратной матрицы размерностью 5 на 5 инициализировать целыми случайными числами от 0 до 10 (начальное значение генератора запросить у пользователя).  
Вывести исходный массив в виде матрицы. Элементы в строке разделять знаками табуляции.

Найти сумму минимальных элементов всех столбцов.*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int SIZE = 5;
    int ar[SIZE][SIZE];
    int x,sum;

    cin >> x;
    srand(x);

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            ar[i][j] = rand() % 11;
            cout << ar[i][j] << "\t";
        }
        cout << endl;
    }

    sum = 0;

    for (int i = 0; i < SIZE; i++)
    {
        int min = ar[0][i];
        for (int j = 1; j < SIZE; j++)
        {
            if (ar[j][i] < min)
            {
                min = ar[j][i];
            }
        }
        sum += min;
    }

    cout << sum;

    return 0;
}

