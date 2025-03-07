/*Напишите функцию transform(), которая меняет порядок элементов передаваемого одномерного массива на обратный. Внутри функции запрещено использовать вспомогательный массив. 
Используйте шаблон для реализации версий этой функции, работающих с различными типами элементов массива.

Аналогично с помощью шаблона создайте функции

getArray() - для ввода элементов одномерного массива с консоли
printArray() - для вывода одномерного массива в строку и перевода курсора на новую строку после этого*/
#include <iostream>
using namespace std;

template <typename T>
void getArray(T* ar, int N)
{
    for (int i = 0; i < N; i++,ar++)
    {
        cin >> *ar;
    }
}

template <typename T>
void printArray(T* ar, int N)
{
    for (int i = 0; i < N; i++, ar++)
    {
        cout << *ar << " ";
    }

    cout << endl;
}

template <typename T>
void transform(T* ar, int N)
{
    for (int i = 0; i < N / 2; i++)
    {
        T tmp = *(ar+i);
        *(ar + i) = *(ar + N  - 1 - i);
        *(ar + N  - 1 - i) = tmp;
    }

}

int main() {
    const int N = 10;
    const int M = 5;
    const int K = 7;
    int a[N];
    double b[M];
    char c[K];
    getArray(a, N);
    getArray(b, M);
    getArray(c, K);
    transform(a, N);
    transform(b, M);
    transform(c, K);
    printArray(a, N);
    printArray(b, M);
    printArray(c, K);
    return 0;
}