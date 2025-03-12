/*Сформируйте динамический одномерный массив. Заполните его случайными числами от -10 до 10. Число элементов массива и начальное значение генератора вводит пользователь. 
Выведите исходный массив на консоль, отделяя элементы пробелами.

Найдите в массиве последний максимальный элемент и удалите все элементы, которые находятся после него.
Преобразованный массив должен занимать ровно столько памяти, сколько ему необходимо. Выведите  массив с новой строки .

Оформите инициализацию массива, вывод на консоль и преобразование отдельными функциями.*/
#include <iostream>
#include <cstdlib>
using namespace std;

void initAr(int* ar, int n)
{
	for (int i = 0; i < n; i++)
	{
		ar[i] = rand() % 21 - 10;
	}
}

void printAr(int* ar, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << ar[i] << " ";
	}
	cout << endl;
}

void restructAr(int*& ar, int& n)
{
	int m = 0;
	for (int i = 0; i < n; i++)
	{
		if (ar[i] >= ar[m])
		{
			m = i;
		}
	}

	int* b = new int[m+1];

	for (int i = 0; i < m+1; i++)
	{
		b[i] = ar[i];
	}

	delete[] ar;
	ar = b;
	n = m + 1;
}

int main() {
	int n, c;

	cin >> n >> c;

	int* ar = new int[n];

	srand(c);
	
	initAr(ar, n);
	printAr(ar, n);
	restructAr(ar, n);
	printAr(ar, n);

	delete[] ar;

	return 0;
}