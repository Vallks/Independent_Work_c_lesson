/*Реализовать бинарный поиск в одномерном упорядоченном массиве, пользуясь указателями.

Пользователь вводит отсортированный по возрастанию массив целых чисел из 10 элементов, которые не повторяются.

Затем вводится число для поиска. Нужно найти это число в массиве и вывести с новой строки часть массива, начиная с заданного числа и до конца массива. Элементы отделяются пробелами.

Если искомого числа в массиве нет, то вывести "ERROR".*/
#include <iostream>
using namespace std;

int main()
{
    const int S = 10;
    int ar[S];
    int x, low, up;
    int* ptr = ar;

    for (int i = 0; i < S; i++, ptr++)
    {
        cin >> *ptr;
    }

    cin >> x;
    
    low = 0;
    up = S - 1;

    int res = -1, mid = 0;
    ptr = ar;

    while (low < up)
    {
        mid = (low + up) / 2;
        if (*(ptr + mid) == x)
        {
            res = mid;
            break;
        }

        if (*(ptr + mid) > x)
        {
            up = mid - 1;
        }

        if (*(ptr + mid) < x)
        {
            low = mid + 1;
        }
    }   

    if (res == -1)
    {
        cout << "ERROR";

        return 0;
    }

    int* ptrp = ar + mid;
    ptr = ar + S;

    while (ptrp < ptr)
    {
        cout << *ptrp << " ";
        ptrp++;
    }

    return 0;
}
