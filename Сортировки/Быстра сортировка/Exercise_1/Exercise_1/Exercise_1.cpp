/*Напишите рекурсивную функцию сортировки массива по убыванию (не возрастанию), используя алгоритм быстрой сортировки.

В функции main() массив из 10 элементов вводится с консоли, затем вызывается функция  mysort(), после чего упорядоченный массив распечатывается.*/
#include <iostream>
using namespace std;

void mysort(int ar[], int left, int right)
{
    if (left > right)
    {
        return;
    }

    int i = left;
    int j = right;
    int p = ar[(left + right) / 2];

    while (i <= j)
    {
        while (ar[i] > p)
        {
            i++;
        }
        while (ar[j] < p)
        {
            j--;
        }
        if (i <= j)
        {
            int tmp = ar[i];
            ar[i] = ar[j];
            ar[j] = tmp;
            i++;
            j--;
        }
    }

    mysort(ar, left, j);
    mysort(ar, i, right);

    return;
}

int main() {
    const int N = 10;
    int a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    mysort(a, 0, N - 1);
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    return 0;
}