/*Создать массив из 12 целых чисел. Заполнить массив случайным образом в диапазоне от -45 до 45 (начальное значение генератора случайных чисел запросить у пользователя).

Вывести исходный массив на консоль в одной строке, разделяя элементы пробелами. Пробел должен быть в том числе и после последнего элемента массива. 

Подсчитать процент положительных и процент отрицательных элементов массива. Результаты распечатать на следующей строке co знаком %. Проценты округлить до одного знака после десятичной точки. Разделить пробелом.*/
#include <iostream>
#include <cstdlib>
#include <iomanip>

int main()
{
	const int SIZE = 12;
	int ar[SIZE];
	int x, count_n = 0, count_p = 0;
	double prn, prp;
	int* ptra;

	std::cin >> x;

	srand(x);

	ptra = ar;
	for (int i = 0; i < SIZE; i++,ptra++)
	{
		*ptra = rand() % 91 - 45;
		std::cout << *ptra << " ";
		if (*ptra > 0)
		{
			count_p++;
		}
		if (*ptra < 0)
		{
			count_n++;
		}
	}

	std::cout << std::endl;

	prn = (double)count_n / SIZE * 100;
	prp = (double)count_p / SIZE * 100;

	std::cout << std::fixed << std::setprecision(1) << prp << "% "
		<< std::fixed << std::setprecision(1) << prn << "% ";

	return 0;
}
