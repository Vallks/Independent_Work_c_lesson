/*Напишите функцию, которая для целого числа возвращает количество цифр в числе и процент четных цифр.

В функции main продемонстрируйте ее использование: вводится число, затем вызов функции, и вывод результатов через пробел. Проценты должны выводится с округлением до  целого числа и со знаком %.*/
#include <iostream>
#include <cmath>

using namespace std;

int myfunc(int x, int* prc)
{
	int count = 0, count_pol = 0;

	if (x == 0)
	{
		*prc = 100;
		return 1;
	}

	while (x != 0)
	{
		int a = x % 10;

		if (a % 2 == 0)
		{
			count_pol++;
		}

		x = x / 10;

		count++;
	}

	*prc = round((double) count_pol / count * 100);

	return count;
}

int main()
{
	int cifr, prc, x;
	
	cin >> x;

	cifr = myfunc(x, &prc);

	cout << cifr << " " << prc <<"%";

	return 0;
}