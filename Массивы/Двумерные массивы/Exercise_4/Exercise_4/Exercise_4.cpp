/*Элементы двумерного массива целых чисел из 4 строк и 3 столбцов инициализировать случайными значениями от -5 до 5 
(начальное значение генератора случайных чисел запросить у пользователя).  Вывести исходный массив на консоль в виде  матрицы (элементы в строке отделять знаками табуляции).

Подсчитать количество строк, которые не содержат ни одного нулевого элемента.*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	const int ROW = 4;
	const int COL = 3;
	int ar[ROW][COL];
	int x, count, count0;

	cin >> x;
	count = 0;
	srand(x);

	for (int i = 0; i < ROW; i++)
	{
		count0 = 0;
		for (int j = 0; j < COL; j++)
		{
			
			ar[i][j] = rand() % 11 - 5;
			cout << ar[i][j] << "\t";

			if (ar[i][j] == 0)
			{
				count0++;
			}
		}
		cout << endl;
		if (count0 == 0)
		{
			count++;
		}
	}

	cout << count;

	return 0;
}
