/*Написать  функцию largerOf, которая заменяет значение  каждой из двух переменных типа double большим из них.

В методе main продемонстрировано использование этой функции: вводятся два вещественных числа в переменные x и y, затем идет вызов функции и выводятся на консоль значения x и y после вызова.*/
#include<iostream>

using namespace std;

#include <iomanip>

void largerOf(double* x, double* y)
{
    if (*x > *y)
    {
        *y = *x;
    }
    else
    {
        *x = *y;
    }
}

int main() {
    double x, y;
    cin >> x >> y;
    largerOf(&x, &y);
    cout << fixed << setprecision(2) << x << " " << y;
    return 0;
}