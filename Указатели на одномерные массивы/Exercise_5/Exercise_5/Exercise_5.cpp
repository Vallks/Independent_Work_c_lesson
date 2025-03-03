/*Массив целых чисел из 15 элементов заполнить случайными числами от -10 до 10 (начальное значение генератора случайных чисел запросить у пользователя). Вывести этот массив на консоль, отделяя элементы пробелами.

Найти среднее арифметическое элементов массива, которые расположены между первым отрицательным элементом и последним максимальным элементом в массиве (включая эти элементы). 
Вывести найденное среднее арифметическое с новой строки, округлив до двух знаков после десятичной точки.

Если отрицательных элементов в массиве нет, то вывести "ERROR".*/
#include <iostream>
#include <cstdlib>
#include <iomanip>

int main()
{
	const int SIZE = 15;
	int ar[SIZE];
	int x, sum = 0, count = 0;
	int* ptr = ar, * ptrn = ar, * ptrp = ar;
	bool isF = true;

	std::cin >> x;
	srand(x);

	for (int i = 0; i < SIZE; i++, ptr++)
	{
		*ptr = rand() % 21 - 10;

		std::cout << *ptr << " ";

		if (*ptr < 0 && isF)
		{
			ptrn = ptr;
			isF = false;
			count++;
		}

		if (*ptr >= *ptrp)
		{
			ptrp = ptr;
		}
	}

	if (count == 0)
	{
		std::cout << std::endl << "ERROR";

		return 0;
	}

	count = 0;

	if (ptrp < ptrn)
	{
		ptr = ptrp;
		ptrp = ptrn;
		ptrn = ptr;
	}

	while (ptrn <= ptrp)
	{
		sum += *ptrn;
		count++;
		ptrn++;
	}

	std::cout << std::endl << std::fixed << std::setprecision(2) << (double)sum / count;

	return 0;
}
