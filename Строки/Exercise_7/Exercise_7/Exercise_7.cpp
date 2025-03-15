/*Вводится строка, которая может содержать пробелы. Максимальная длина строки 20 символов (без учета нуль-терминатора). 
Подсчитать, сколько знаков арифметических операций содержит эта строка. Рассматриваются только знаки +, -, *, / и %.*/
#include <iostream>
#include <string.h>

using namespace std;

int main() {
	char str[20];
	int count = 0, i = 0;

	fgets(str,20,stdin);
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '%')
		{
			count++;
		}
		i++;
	}

	cout << count;

	return 0;
}