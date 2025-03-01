/*Пользователь вводит начальное значение генератора случайных чисел. Сформируйте массив из 10 элементов, заполнив его случайными числами от 1 до 10. 
Массив выведите на консоль, отделяя элементы пробелами. Пробел должен быть и в конце массива.

Выполните сортировку массива по убыванию (не возрастанию), используя метод шейкер-сортировки.

Выведите отсортированный массив с новой строки, отделяя элементы пробелами.*/
#include <iostream>
#include <cstdlib>

int main()
{
	const int SIZE = 10;
	int ar[SIZE];
	int x, tmp, last, low = 0, up = SIZE - 1;

	std::cin >> x;

	srand(x);

	for (int i = 0; i < SIZE; i++)
	{
		ar[i] = rand() % 10 + 1;
		std::cout << ar[i] << " ";
	}
	std::cout << std::endl;

	while (low < up)
	{
		last = -1;
		for (int i = low; i < up; i++)
		{
			if (ar[i] <= ar[i + 1])
			{
				tmp = ar[i + 1];
				ar[i + 1] = ar[i];
				ar[i] = tmp;
				last = i;
			}
		}
		up = last;
		last = SIZE;
		for (int i = up; i >= low; i--)
		{
			if (ar[i] <= ar[i + 1])
			{
				tmp = ar[i + 1];
				ar[i + 1] = ar[i];
				ar[i] = tmp;
				last = i;
			}
		}
		low = last;
	}

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << ar[i] << " ";
	}

	return 0;
}

