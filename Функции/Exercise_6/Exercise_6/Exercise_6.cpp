/*Напишите функцию, которая вычисляет площадь круга и длину окружности.

В методе main продемонстрировано использование этой функции: вводится радиус круга, затем идет вызов функции и выводятся на консоль значения площади круга  и  длины окружности после вызова.*/
#include<iostream>

using namespace std;

#include <iomanip>
#include <math.h>

double circle(double r, double* l)
{
    *l = 2 * (atan(1) * 4) * r;

    return (atan(1) * 4) * pow(r,2);
}

int main() {
    double r, square, length;
    cin >> r;
    square = circle(r, &length);
    cout << fixed << setprecision(2) << square << " " << length;
    return 0;
}
