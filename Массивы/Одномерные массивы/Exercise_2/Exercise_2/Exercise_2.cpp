/*Массив из 10 целых чисел вводится с консоли. 
Найти среднее арифметическое элементов и количество элементов, меньших этого среднего. Среднее арифметическое при выводе представить с одним десятичным знаком в дробной части.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const char SIZE = 10;
	int ar[SIZE];
	int sum = 0;
	int count = 0;

	double srArif = 0;

	for (int i = 0; i < SIZE; i++)
	{
		cin >> ar[i];

		sum += ar[i];
	}

	srArif = (double)sum / SIZE;

	for (int i = 0; i < SIZE; i++)
	{
		if (ar[i] < srArif)
		{
			count++;
		}
	}

	cout << fixed << setprecision(1) << srArif << " " << count;

	return 0;
}