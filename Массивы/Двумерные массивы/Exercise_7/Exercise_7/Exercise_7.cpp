/*Элементы двумерного массива из 4 строк и 6 столбцов заполнить случайными целыми значениями от -3 до 3 (начальное значение генератора запросить у пользователя).  
Вывести исходный массив. Элементы в строке разделять знаками табуляции.

Вывести пустую строку.

Для каждого столбца распечатать количество нулевых элементов. Вывести их в строку, отделяя знаками табуляции.*/

#include <iostream>
#include <cstdlib>

int main()
{
	const int ROW = 4;
	const int COL = 6;
	int x;
	int ar[ROW][COL];

	std::cin >> x;

	std::srand(x);

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			ar[i][j] = rand() % 7 - 3;
			std::cout << ar[i][j] << "\t";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	for (int i = 0; i < COL; i++)
	{
		int count = 0;
		for (int j = 0; j < ROW; j++)
		{
			if (ar[j][i] == 0)
			{
				count++;
			}
		}
		std::cout << count << "\t";
	}

	return 0;
}
