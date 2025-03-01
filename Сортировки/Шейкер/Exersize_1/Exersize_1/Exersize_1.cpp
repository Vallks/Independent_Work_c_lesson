/*Пользователь вводит начальное значение генератора случайных чисел. Сформируйте массив из 10 элементов, заполнив его случайными числами от -12 до 12. 
Массив выведите на консоль, отделяя элементы пробелами. Пробел должен быть и в конце массива.

Найдите индекс первого максимального элемента в массива. Выведите его на консоль с новой строки.

Все элементы левее него отсортируйте по возрастанию (не убыванию), а правее - по убыванию (не возрастанию). Используйте какую-либо модификацию метода пузырька.*/

#include <iostream>
#include <cstdlib>

int main()
{
	const int SIZE = 10;
	int ar[SIZE];
	int x, tmp, max = 0, last;

	std::cin >> x;

	srand(x);

	for (int  i = 0; i < SIZE; i++)
	{
		ar[i] = rand() % 25 - 12;
		std::cout << ar[i] << " ";
		if (ar[i] > ar[max])
		{
			max = i;
		}
	}

	std::cout << std::endl << max << std::endl;

	x = max;

	while (x > 0)
	{
		last = -1;
		for (int i = 0; i < x; i++)
		{
			if (ar[i] > ar[i + 1])
			{
				tmp = ar[i];
				ar[i] = ar[i + 1];
				ar[i + 1] = tmp;
				last = i;
			}
		}
		x = last;
	}

	x = SIZE - 1;

	while (x > max)
	{
		last = -1;
		for (int i = max+1; i < x; i++)
		{
			if (ar[i] < ar[i + 1])
			{
				tmp = ar[i];
				ar[i] = ar[i + 1];
				ar[i + 1] = tmp;
				last = i;
			}
		}
		x = last;
	}

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << ar[i] << " ";
	}

	return 0;
}

