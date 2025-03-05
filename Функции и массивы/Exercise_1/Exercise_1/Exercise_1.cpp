/*Напишите функцию определения суммы элементов одномерного массива целых чисел. Функция дожна работать для любого числа элементов.

Также создайте функцию вывода массива на консоль и инициализации элементов массива случайными числами от -5 до 10.

При выводе элементы массива отделяются пробелами и выводятся в одну строку, после чего курсор переходит на новую строку.

В функции main имеется заготовка с вызовом этих функций. Вводится начальное значение генератора случайных чисел. Выводится массив и на следующей строке - сумма его элементов.*/
#include <iostream>
#include <cstdlib>
using namespace std;

void initArray(int[], int);
void printArray(const int[], int);
int sumArray(const int[], int);

int main() {
    int n;
    cin >> n;
    srand(n);
    const int M = 10;
    int a[M];
    initArray(a, M);
    printArray(a, M);
    cout << sumArray(a, M);
    return 0;
}

void initArray(int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        ar[i] = rand() % 16 - 5;
    }

    return;
}

void printArray(const int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }

    cout << endl;

    return;
}

int sumArray(const int ar[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += ar[i];
    } 

    return sum;
}
