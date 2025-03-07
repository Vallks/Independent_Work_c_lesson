/*Создайте перегрузку для функции myArea(), которая вычисляет:

площадь квадрата (один параметр типа double)
площадь прямоугольника (два параметра типа double)*/
#include <iostream>
using namespace std;
double myArea(double);
double myArea(double,double);

int main() {
	double x, y, z;
	cin >> x >> y >> z;
	cout << myArea(x) << " " << myArea(y, z);
	return 0;
}

double myArea(double x)
{
	return x * x;
}
double myArea(double x, double y)
{
	return x * y;
}