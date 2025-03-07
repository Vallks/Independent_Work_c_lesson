/*Напишите функцию, которая определяет площадь поверхности и объем прямоугольного параллелепипеда.

В функции main имеется заготовка с вызовом этой функции. 
Вводятся длины трех сторон параллелепипеда, затем вызывается функция с именем  parallelepiped (которую и нужно реализовать), и после вызова выводятся на консоль площадь поверхности и объем параллелепипеда через пробел . */
#include<iostream>
using namespace std;
#include <iomanip>

double parallelepiped(double, double, double, double&);

int main() {
	double a, b, c, square, volume;
	cin >> a >> b >> c;
	square = parallelepiped(a, b, c, volume);
	cout << fixed << setprecision(2) << square << " " << volume;
	return 0;
}

double parallelepiped(double a, double b, double c, double& volume)
{
	volume = a * b * c;
	return 2 * (a * c + c * b + a * b);
}
