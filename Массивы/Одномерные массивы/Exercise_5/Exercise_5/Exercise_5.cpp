/*Пользователь вводит начальное значение генератора случайных чисел. Массив из 10 целочисленных элементов заполните случайными числами от -3 до 3.  
Выведите элементы массива на консоль, отделяя их пробелами (пробел должен быть и в конце массива).

Подсчитайте количество нулевых элементов в массиве и выведите его с новой строки.

Найдите сумму элементов, расположенных между первым и последним нулями и выведите ее с новой строки.

Если в массиве нет нулей, то выводится ERROR. Если ноль всего один (он и первый, и последний), то сумма должна быть равна нулю. 
Аналогично, когда в массиве всего два нуля, и они идут подряд. */
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	const int SIZE = 10;
	int x, count = 0, min_indx = -1, max_indx = -1, sum = 0;
	int ar[SIZE];

	cin >> x;
	srand(x);

	for (int i = 0; i < SIZE; i++)
	{
		ar[i] = rand() % 7 - 3;
		cout << ar[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < SIZE; i++)
	{
		if (ar[i] == 0)
		{
			count++;
		}
	}

	cout << count << endl;

	for (int i = 0; i < SIZE; i++)
	{
		if (ar[i] == 0)
		{
			min_indx = i;
			break;
		}
	}

	for (int i = SIZE-1; i >=0; i--)
	{
		if (ar[i] == 0)
		{
			max_indx = i;
			break;
		}
	}

	if (count == 0)
	{
		cout << "ERROR"; 
		return 0;
	}
	
	if (count == 1)
	{
		cout << 0;
		return 0;
	}

	if (min_indx != max_indx)
	{
		for (int i = min_indx; i <= max_indx; i++)
		{
			sum += ar[i];
		}
	}

	cout << sum;

	return 0;
}
