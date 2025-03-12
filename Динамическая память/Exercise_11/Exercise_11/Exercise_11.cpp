/*Напишите функцию, которая проверяет, является ли данная квадратная матрица "магическим квадратом". 
При этом "магическим квадратом" называется матрица, в которой сумма чисел в каждом горизонтальном ряду, в каждом вертикальном и по обоим диагоналям одна и та же
Пользователь вводит размер матрицы, а затем построчно ее элементы. Программа должна распечатывать YES, если это магический квадрат, и NO - если нет.*/
#include <iostream>
#include <cstdlib>

using namespace std;

void initAr(int** ar, int r)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < r; j++)
		{
			cin >> ar[i][j];
		}
	}
}

bool checkAr(int **ar, int r)
{
	int sum0 = 0;

	for (int i = 0; i < r; i++)
	{
		sum0 += ar[0][i];
	}

	for (int i = 1; i < r; i++)
	{
		int sum = 0;
		for (int j = 0; j < r; j++)
		{
			sum += ar[i][j];
		}
		if (sum != sum0)
		{
			return false;
		}
	}

	for (int i = 1; i < r; i++)
	{
		int sum = 0;
		for (int j = 0; j < r; j++)
		{
			sum += ar[j][i];
		}
		if (sum != sum0)
		{
			return false;
		}
	}

	return true;
}

int main() {
	int r;

	cin >> r;

	int** ar = new int *[r];
	
	for (int i = 0; i < r; i++)
	{
		ar[i] = new int[r];
	}

	initAr(ar, r);
	if (checkAr(ar, r))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	for (int i = 0; i < r; i++)
	{
		delete[] ar[i];
	}
	delete[] ar;

	return 0;
}