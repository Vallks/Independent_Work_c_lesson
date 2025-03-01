/*Пользователь вводит начальное значение генератора случайных чисел. 
Сформируйте массив из 10 элементов, заполнив его случайными числами от 0  до 5. Массив выведите на консоль, отделяя элементы пробелами. Пробел должен быть и в конце массива.

Уплотните массив, удалив из него все нулевые элементы (нули переносятся в конец массива).

Распечатайте полученный массив, отделяя элементы пробелами.*/
#include <iostream>
#include <cstdlib>

int main()
{
	const int SIZE = 10;
	int ar[SIZE];
	int x, j, col = 0;

	std::cin >> x;

	std::srand(x);

	for (int i = 0; i < SIZE; i++)
	{
		ar[i] = rand() % 6;
		std::cout << ar[i] << " ";
		if (ar[i] == 0)
		{
			col++;
		}
	}

	int i = 0;
	while (col > 0)
	{
		if (ar[i] == 0)
		{
			int tmp = ar[i];
			for (int j = i; j < SIZE - 1; j++)
			{
				ar[j] = ar[j + 1];
			}
			ar[SIZE - 1] = tmp;
			col--;
		}
		else
		{
			i++;
		}
	}
	
	std::cout << std::endl;

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << ar[i] << " ";
	}

	return 0;
}
