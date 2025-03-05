/*Написать функцию usred, которая заменяет значения  каждой из двух  вещественных переменных их средним арифметическим.

В образце кода показано использование этой функции. При выводе число выводится с одним десятичным знаком.*/
#include<iostream>
using namespace std;
#include <iomanip>

void  usred(double* x, double* y)
{
    double sred = (*x + *y) / 2;
    *x = *y = sred;
}

//put your code here
int main() {
    double x, y;
    cin >> x >> y;
    usred(&x, &y);
    cout << fixed << setprecision(1) << x << " " << y;
    return 0;
}