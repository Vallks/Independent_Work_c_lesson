/*Ввести значения элементов массива из 7 целых чисел.  
Найти первый минимальный элемент массива и заменить его нулем. Вывести измененный массив на консоль (элементы разделять одним пробелом).*/

#include <iostream>

using namespace std;

int main()
{
	const int SIZE = 7;
	int ar[SIZE];
	int indx = 0;

	for (int i = 0; i < SIZE; i++)
	{
		cin >> ar[i];
	}

	for (int i = 0; i < SIZE; i++)
	{
		if (ar[i] < ar[indx])
			indx = i;
	}

	ar[indx] = 0;

	for (int i = 0; i < SIZE; i++)
	{
		cout << ar[i] << " ";
	}

	return 0;
}

