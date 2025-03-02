/*Пользователь вводит упорядоченный по возрастанию массив из 10 элементов. А также вводится число для поиска.

Нужно методом бинарного поиска найти индекс этого числа в массиве. Выполнить реверс части массива, расположенного после найденного элемента.

Вывести преобразованный массив на консоль, отделяя элементы пробелами. Если искомое число в массиве отсутствует, вывести на консоль "NO".*/
#include <iostream>

int main()
{
	const int SIZE = 10;
	int ar[SIZE];
	int poisk, low, up, mid, k, last, ind = -1;

	for (int i = 0; i < SIZE; i++)
	{
		std::cin >> ar[i];
	}

	std::cin >> poisk;

	low = 0;
	up = SIZE - 1;

	do
	{
		mid = (low + up) / 2;
		if (ar[mid] == poisk)
		{
			ind = mid;
			break;
		}
		if (ar[mid] > poisk)
		{
			up = mid - 1;
		}
		if (ar[mid] < poisk)
		{
			low = mid + 1;
		}
	} while (low < up);

	if (ind == -1)
	{
		std::cout << "NO";
		return 0;
	}

	k = SIZE - 1;
	while (k > ind)
	{
		last = -1;
		for (int i = ind + 1; i < k; i++)
		{
			if (ar[i] < ar[i + 1])
			{
				int tmp = ar[i];
				ar[i] = ar[i + 1];
				ar[i + 1] = tmp;
				last = i;
			}
		}
		k = last;
	}

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << ar[i] << " ";
	}

	return 0;
}
