/*Напишите функцию, которая в одномерном массиве целых чисел  определяет индекс числа с наибольшей суммой цифр. Постарайтесь использовать как вспомогательную ту функцию, которую Вы создали на шаге 2. 

Кроме того, напишите функцию ввода с консоли массива целых чисел.

В функции main() продемонстрируйте использование этих функций: введите массив из 5 элементов, найдите число с наибольшей суммой цифр, и выведите его индекс на консоль.*/
#include <iostream>
using namespace std;

void read(int* ar, int N)
{
	for (int i = 0; i < N; i++, ar++)
	{
		cin >> *ar;
	}
	return;
}

int sumOfNumbers(int value)
{
	int sum = 0;

	while (value != 0)
	{
		int cyf = value % 10;
		sum += cyf;
		value /= 10;
	}

	return abs(sum);
}

int getInd(int* ar, int N)
{
	int ind = 0, tZnach, max = 0;

	for (int i = 0; i < N; i++)
	{
		tZnach = sumOfNumbers(*(ar+ i));
		if (tZnach > max)
		{
			ind = i;
			max = tZnach;
		}
	}

	return ind;
}


int main() {
	const int N = 5;
	int ar[N];
	read(ar, N);
	cout << getInd(ar, N);

	return 0;
}