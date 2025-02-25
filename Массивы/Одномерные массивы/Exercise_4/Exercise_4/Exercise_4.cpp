/* Введите значения элементов массива из 6 целых чисел.
Поменяйте местами последний максимальный  и первый минимальный элементы.Выведите измененный массив на консоль, отделяя элементы пробелами. */

#include <iostream>

using namespace std;

int main()
{
	const int SIZE = 6;
	int ar[SIZE];
	int min, max, x;

	min = max = x = 0;

	for (int i = 0; i < SIZE; i++)
	{
		cin >> ar[i];
	}

	for (int i = 0; i < SIZE; i++)
	{
		if(ar[i] >= ar[max])
		{
			max = i;
		}

		if (ar[i] < ar[min])
		{
			min = i;
		}
	}

	x = ar[max];
	ar[max] = ar[min];
	ar[min] = x;

	for (int i = 0; i < SIZE; i++)
	{
		cout << ar[i] << " ";
	}

	return 0;
}

