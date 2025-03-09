/*Напишите функцию, которая получает в качестве параметров два целых числа a и b. 
Она выводит на консоль все целые числа от a до b в порядке возрастания, если a<b, и в порядке убывания в противном случае. Числа отделяются пробелами. Если a равно b, то выводится одно число.

Используйте рекурсию!*/
#include <iostream>
using namespace std;

void order(int a, int b)
{
    if (a == b)
    {
        cout << a;
        return;
    }

    if (a < b)
    {
        cout << a << " ";
        order(++a, b);
    }
    else
    {
        cout << a << " ";
        order(--a, b);
    }
    return;
}

int main() {
    int a, b;
    cin >> a >> b;
    order(a, b);
    return 0;
}
