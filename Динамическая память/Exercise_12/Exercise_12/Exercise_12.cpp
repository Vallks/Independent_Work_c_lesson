/*Сформируйте  динамический двумерный массив. Заполните его случайными числами от 1 до 10 (заполнение производите построчно). 
Пользователь вводит через пробел число строк, число столбцов и начальное значение генератора.

Распечатайте исходный массив в виде таблицы, отделяя элементы в строке знаками табуляции (табуляция должна быть и после последнего элемента строки).

Определите номер строки, содержащей первый максимальный элемент массива. Продублируйте эту строку (вставьте после данной строки еще одну такую же).

Затем пропустите одну строку и распечатайте преобразованный массив.

Каждое действие с двумерным массивом (инициализация, печать, поиск нужной строки, вставка строки) оформите отдельной функцией, вызываемой из main().*/
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
	return;
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
	return;
}

void restrAr(int**&ar, int& r, int c)
{
	int mR = 0, max = ar[0][0];

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (ar[i][j] > max)
			{
				mR = i;
				max = ar[i][j];
			}
		}
	}

	int** nAr = new int* [r + 1];

	int j = 0;

	for (int i = 0; i < r; i++)
	{
		nAr[j] = ar[i];
		if (i == mR)
		{
			j++;
			nAr[j] = new int [c];
			for (int k = 0; k < c; k++)
			{
				nAr[j][k] = ar[i][k];
			}
		}
		j++;
	}

	delete[] ar;

	ar = nAr;
	r++;
	return;
}

int main() {
	int r, c, x;

	cin >> r >> c >> x;
	srand(x);

	int** ar = new int*[r];
	for (int i = 0; i < r; i++)
	{
		ar[i] = new int[c];
	}

	initAr(ar, r, c);
	printAr(ar, r, c);
	restrAr(ar, r, c);
	cout << endl;
	printAr(ar, r, c);

	for (int i = 0; i < r; i++)
	{
		delete[] ar[i];
	}
	delete[] ar;

	return 0;
}