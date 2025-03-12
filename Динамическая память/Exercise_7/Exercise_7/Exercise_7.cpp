/*Сформируйте  динамический двумерный массив. Заполните его случайными числами от 1 до 10 (заполнение производите построчно). Пользователь вводит через пробел число строк, число столбцов и начальное значение генератора.

Распечатайте исходный массив в виде таблицы, отделяя элементы в строке знаками табуляции (табуляция должна быть и после последнего элемента строки).

Определите строку, минимальный элемент которой является наибольшим из минимальных элементов  всех строк. Удалите из массива данную строку (если таких строк несколько, то удалите первую из них).

Затем пропустите одну строку и распечатайте преобразованный массив.

Каждое действие с двумерным массивом (инициализация, печать, поиск нужной строки, удаление строки) оформить отдельной функцией, вызываемой из main().*/
#include <iostream>
#include <cstdlib>

using namespace std;

void initAr(int** ar, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			ar[i][j] = rand() % 10 + 1;
		}
	}
}

void printAr(int** ar, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << ar[i][j] << "\t";
		}
		cout << endl;
	}
}

int findStr(int** ar, int r, int c)
{
	int *b = new int[r];
	
	for (int i = 0; i < r; i++)
	{
		int min = ar[i][0];
		
		for (int j = 0; j < c; j++)
		{
			if (ar[i][j] < min)
			{
				min = ar[i][j];
			}
		}

		b[i] = min;
	}

	int mInd = 0;
	for (int i = 0; i < r; i++)
	{
		if(b[i] > b[mInd])
		{
			mInd = i;
		}
	}

	return mInd;
}

void delStr(int**& ar, int& r, int c, int s)
{
	int** b = new int* [r - 1], j = 0;

	for (int i = 0; i < r; i++)
	{
		if (i == s)
		{
			delete[] ar[i];
		}
		else
		{
			b[j] = ar[i];
			j++;
		}
	}

	delete[] ar;

	ar = b;
	r--;

}

int main() {
	
	int r, c, x, s;

	cin >> r >> c >> x;

	srand(x);
	int** ptr = new int*[r];

	for (int i = 0; i < r; i++)
	{
		ptr[i] = new int[c];
	}

	initAr(ptr, r, c);
	printAr(ptr, r, c);
	s = findStr(ptr, r, c);
	delStr(ptr, r, c, s);
	cout << endl;
	printAr(ptr, r, c);

	for (int i = 0; i < r; i++)
	{
		delete[]ptr[i];
	}
	delete[] ptr;

	return 0;
}