/*Ввести десять целых чисел в одномерный массив. Предполагается, что пользователь вводит упорядоченные по возрастанию данные. 
Также ввести число для поиска. Все данные разделяются пробелами.

Используя бинарный поиск, найти индекс искомого числа. Вывести этот индекс или слово "no", если данный элемент отсутствует в массиве.*/
#include <iostream>

int main()
{
    const int SIZE = 10;
	int ar[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		std::cin >> ar[i];
	}

	int poisk, low = 0, up = SIZE - 1, indx = -1;

	std::cin >> poisk;

	do
	{
		int midl = (low + up) / 2;
		if (poisk == ar[midl])
		{
			indx = midl;
			break;
		}
		if (poisk > ar[midl])
		{
			low = midl + 1;
		}
		if (poisk < ar[midl])
		{
			up = midl - 1;
		}
	} while (low <= up);

	if (indx == -1)
	{
		std::cout << "no";
	}
	else
	{
		std::cout << indx;
	}

	return 0;
}


