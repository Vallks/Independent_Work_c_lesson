/*Напишите рекурсивную функцию сортировки по не убыванию (возрастанию) методом выбора.

В функции main() вводится начальное значение генератора случайных чисел. 
Затем одномерный массив из 10 элементов заполняется случайными числами от 0 до 20 и выводится на консоль (элементы массива отделяются знаками табуляции). 
Потом вызывается функция сортировки и после нее массив также выводится на консоль с новой строки.

Для красоты кода лучше создать дополнительные функции инициализации элементов массива и его вывода на консоль.*/
#include <iostream>
#include <cstdlib>

using namespace std;
//put your code here

void init(int* ar,int N)
{
    for (int i = 0; i < N; i++)
    {
        ar[i] = rand() % 21;
    }
}

void print(int* ar,int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << ar[i] << "\t";
    }
    cout << endl;
}

void sort(int* ar, int n, int ind = 0)
{
    if (ind == n)
    {
        return;
    }

    int min = ind;

    for (int i = ind; i < n; i++)
    {
        if (ar[i] < ar[min])
        {
            min = i;
        }
    }

    int tmp = ar[ind];
    ar[ind] = ar[min];
    ar[min] = tmp;

    sort(ar, n, ++ind);
    return;
}

int main() {
    const int N = 10;
    int ar[N], x;
    cin >> x;
    srand(x);
    
    init(ar, N);
    print(ar, N);
    sort(ar, N);
    print(ar, N);

    return 0;
}
