/*Напишите функцию average(), которая принимает имя массива и количество элементов  этого массива, а возвращает среднее арифметическое всех элементов массива. 
Используйте шаблон для того, чтобы обеспечить работу как с целыми, так и с вещественными массивами.

Аналогично с помощью шаблона создайте функцию getArray()  для ввода элементов одномерного массива с консоли*/
#include <iostream>
using namespace std;

template <typename T>
void getArray(T* ar, int N)
{
    for (int i = 0; i < N; i++, ar++)
    {
        cin >> *ar;
    }
}

template <typename T>
double  average(T* ar, int N)
{
    T sum = 0;
    for (int i = 0; i < N; i++, ar++)
    {
        sum+= *ar;
    }

    return (double)sum / N; // должно быть всегда вещественным иначе округляет
}

int main() {
    const int N = 10;
    const int M = 5;
    const int K = 7;
    int a[N];
    double b[M];
    short c[K];
    getArray(a, N);
    getArray(b, M);
    getArray(c, K);
    cout << average(a, N) << endl;
    cout << average(b, M) << endl;
    cout << average(c, K) << endl;
    return 0;
}