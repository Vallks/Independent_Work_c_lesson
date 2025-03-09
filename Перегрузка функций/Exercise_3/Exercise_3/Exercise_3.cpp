/*Напишите функцию remove(), которая удаляет элемент с заданным индексом из массива. 
Все элементы правее заданного сдвигаются на одну позицию влево, а в конец массива добавляется "пустой" элемент.

Функция должна работать для массивов  с элементами типа int, double и char. 
При этом для чисел "пустой" элемент - это ноль, а для символов - '#'.

Функция принимает указатель на начало массива, количество его элементов и индекс удаляемого элемента. 
Если этот индекс удаляемого элемента неверный (например, превышает размер массива), то функция ничего не изменяет в массиве. 

Подсказка: можно использовать сочетание шаблона и перегрузки.

Также напишите функции read() и print() для чтения массива с клавиатуры и вывода его на экран монитора. 
При выводе элементы массива отделяются пробелами. В конце массива должен быть пробел  и перевод на новую строку. Для вывода используйте cout без всякого форматирования.*/
#include <iostream>
using namespace std;

template <typename myType>
void read(myType* ar, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> *ar;
        ar++;
    }

    return;
}

template <typename myType>
void print(myType *ar, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *ar << " ";
        ar++;
    }
    cout << endl;
    return;
}

void remove(double* ar, int n, int in)
{
    if (in < 0 || in >= n)
    {
        return;
    }
    for (int i = in; i < n - 1 ; i++)
    {
        ar[i] = ar[i + 1];
    }
    ar[n - 1] = 0;
 }

void remove(int*ar, int n, int in)
{
    if (in < 0 || in >= n)
    {
        return;
    }
    for (int i = in; i < n - 1; i++)
    {
        ar[i] = ar[i + 1];
    }
    ar[n - 1] = 0;
}

void remove(char* ar, int n, int in)
{
    if (in < 0 || in >= n)
    {
        return;
    }
    for (int i = in; i < n - 1; i++)
    {
        ar[i] = ar[i + 1];
    }
    ar[n - 1] = '#';
}

int main() {
    const int N = 10;
    int a[N];
    double b[N];
    char c[N];
    read(a, N);
    int ind;
    cin >> ind;
    remove(a, N, ind);
    print(a, N);
    read(b, N);
    cin >> ind;
    remove(b, N, ind);
    print(b, N);
    read(c, N);
    cin >> ind;
    remove(c, N, ind);
    print(c, N);
    return 0;
}