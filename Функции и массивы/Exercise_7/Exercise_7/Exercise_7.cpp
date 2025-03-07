/*Напишите функцию myMin(), которая определяет последний минимальный элемент одномерного массива (его значение и номер). Внутри функции запрещено использовать вывод на консоль. 

Также напишите функцию read() для чтения элементов массива с консоли. 

Функции должны работать для любого числа элементов массива.

В функции main() продемонстрируйте использование этой функции  для массивов из 5 и 10 элементов.
В ней вводится каждый массив, затем осуществляется определение и вывод минимального элемента и его номера (с точки зрения пользователя)*/
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

int myMin(int* ar, int N, int & ind)
{
	int min = *ar;

	for (int i = 0; i < N; i++, ar++)
	{
		if (*ar <= min)
		{
			min = *ar;
			ind = i + 1;
		}
	}

	return min;
}

int main() {
	const int N = 5;
	const int M = 10;
	int a[N], b[M];
	int minim, imin;
	read(a, N);
	minim = myMin(a, N, imin);
	cout << minim << " " << imin << endl;
	read(b, M);
	minim = myMin(b, M, imin);
	cout << minim << " " << imin << endl;
	return 0;
}
