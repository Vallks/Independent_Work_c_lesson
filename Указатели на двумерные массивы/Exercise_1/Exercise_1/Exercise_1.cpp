/*Двумерный массив целых чисел размерности 4 на 3 заполнить случайными значениями от 0 до 10 (начальное значение генератора случайных чисел  вводит пользователь). 
Распечатать массив в виде таблицы.  После каждого элемента должен стоять знак табуляции.

С новой строки вывести количество нулевых элементов массива.

Использовать указатели при работе с двумерным массивом!*/
#include <iostream>
#include <cstdlib>

int main()
{
	const int ROW = 4;
	const int COL = 3;

	int arr[ROW][COL];
	int x, count = 0;

	std::cin >> x;

	srand(x);

	int* ptr = arr[0];

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++, ptr++)
		{
			*ptr = rand() % 11;
			std::cout << *ptr << "\t";

			if (*ptr == 0)
			{
				count++;
			}
		}
		std::cout << std::endl;
	}
	std::cout << count;

	return 0;
}