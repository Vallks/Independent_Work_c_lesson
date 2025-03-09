/*Напишите функцию с переменным числом параметров типа int, которая вычисляет среднее арифметическое этих параметров. Первым обязательным параметром передается количество далее следующих чисел.

Вызов этой функции представлен в функции main().*/
#include <iostream>
#include <stdarg.h>
using namespace std;

double average(int n, ...)
{
	int sum = 0, a;
	va_list p;
	va_start(p, n);

	for (int i = 0; i < n; i++)
	{
		a = va_arg(p, int);
		sum += a;
	}

	return (double)sum / n
}

int main() {
    cout << average(3, 5, 7, 12) << " " << average(5, 1, 8, 3, 2, -5);
    return 0;
}