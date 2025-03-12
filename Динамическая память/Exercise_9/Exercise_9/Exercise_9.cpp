/*Сформируйте динамический одномерный массив. Заполните его случайными числами от -5 до 5. Число элементов массива и начальное значение генератора вводит пользователь. 
Выведите исходный массив на консоль, отделяя элементы пробелами.

Продублируйте все отрицательные элементы. Преобразованный массив должен занимать ровно столько памяти, сколько ему необходимо. Выведите  массив с новой строки .

Оформите инициализацию массива, вывод на консоль и преобразование отдельными функциями.*/
#include <iostream>
#include <cstdlib>

using namespace std;

void restructAr(int*& ar, int& n)
{
	int c = 0;
	for (int i = 0; i < n; i++)
	{
		if(ar[i] < 0)
		{
			c++;
		}
	}

	int* b = new int[n + c];
	int j = 0;

	for (int i = 0; i < n; i++)
	{
		b[j] = ar[i];
		if (ar[i] < 0)
		{
			j++;
			b[j] = ar[i];
		}
		j++;
	}
	
	delete[] ar;
	ar = b;
	n = n + c;
}

void printAr(int* ar, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << ar[i] << " ";
	}
	cout << endl;
}

void initAr(int* ar, int n)
{
	for (int i = 0; i < n; i++)
	{
		ar[i] = rand() % 11 - 5;
	}
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