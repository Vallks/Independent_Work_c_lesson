﻿/*Сформируйте динамический одномерный массив целых чисел и заполните его случайными числами от -5 до 5. Пользователь вводит количество элементов массива и, через пробел, начальное значение генератора случайных чисел.

Нужно распечатать элементы массива через пробел, затем удалить из массива все нулевые элементы и распечатать полученный массив с новой строки через пробел.

ВАЖНО! Новый массив должен занимать столько памяти, сколько ему необходимо (не больше). Преобразование массива, заполнение массива случайными значениями и вывод массива на консоль оформляются отдельными функциями.

Для работы с динамической памятью используйте операции языка С++. 

Напоминаю, что операции объявления указателя и его инициализации не обязательно выполняются в одном операторе:

int *a=new int[n];

Они могут быть выполнены и отдельно, что и нужно сделать в этом задании:

int *a=NULL;

a=new int[n];*/
#include <iostream>
#include <cstdlib>

using namespace std;

void initArray(int* ar, int n)
{
    for (int i = 0; i < n; i++)
    {
        ar[i] = rand() % 11 - 5;
    }
}

void printArray(int* ar, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
}

void convertArray(int *&ar, int &n)
{
    int count = 0, j = 0;

    for (int i = 0; i < n; i++)
    {
        if(ar[i] != 0)
        {
            count++;
        }
    }
    
    int* b = new int[count];

    for (int i = 0; i < n; i++)
    {
        if (ar[i] != 0)
        {
            b[j] = ar[i];
            j++;
        }
    }

    delete[] ar;

    ar = b;
    n = count;
}

int main() {
    int n, beg;
    cin >> n >> beg;
    srand(beg);
    int* a = NULL;
    a = new int[n];
    initArray(a, n);
    printArray(a, n);
    convertArray(a, n);
    printArray(a, n);
    delete[] a;
    a = NULL;
    return 0;
}