/*Напишите функцию определения суммы максимумов в столбцах двумерного массива. 

Также напишите функции инициализации двумерного массива случайными числами от 0 до 10 и вывода двумерного массива на консоль в виде таблицы. Элементы в строке отделяются знаками табуляции.

Все функции должны работать  с массивами, имеющими 4 столбца.

В функции main имеется заготовка с вызовом этих функций. Вводится начальное значение генератора случайных чисел. Выводится массив и на следующей строке - сумма максимальных элементов его столбцов.*/
#include <iostream>
using namespace std;
#define N 3
#define M 4

void initArray(int mas[][M], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < M; j++)
        {
            mas[i][j] = rand() % 11;
        }
    }

    return;
}

void printArray(int(*mas)[M], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << mas[i][j] << "\t";
        }
        cout << "\n";
    }

    return;
}

int sumOfMax(int ar[][M], int n)
{
    int sum = 0;
    for (int i = 0; i < M; i++)
    {
        int max = ar[0][i];
        for (int j = 0; j < n; j++)
        {
            if (ar[j][i] > max)
            {
                max = ar[j][i];
            }
        }
        sum += max;            
    }

    return sum;
}

int main() {
    int n;
    cin >> n;
    srand(n);
    int a[N][M];
    initArray(a, N);
    printArray(a, N);
    int sum = sumOfMax(a, N);
    cout << sum;
    return 0;
}