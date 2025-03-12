/*Создайте динамический одномерный массив целых чисел. Пользователь вводит число элементов массива и значения этих элементов. 

Затем пользователь вводит контрольное значение. Нужно удалить из массива все элементы, меньшие этого контрольного значения. 
Новый массив должен занимать ровно столько памяти, сколько необходимо.

Выведите  массив на консоль, отделяя элементы пробелами.*/
#include <iostream>
using namespace std;

void del(int* &ar,int &n, int x)
{
	int c = 0;
	for (int i = 0; i < n; i++)
	{
		if (ar[i] >= x)
		{
			c++;
		}
	}

	int* b = new int[c];

	int j = 0;

	for (int i = 0; i < n; i++)
	{
		if (ar[i] >= x)
		{
			b[j++] = ar[i];
		}
	}

	delete[] ar;

	ar = b;

	n = c;
}

void printAr(int* ar, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << ar[i] << " ";
	}
}

int main() {
	int n, x;

	cin >> n ;

	int* ptr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> ptr[i];
	}

	cin >> x;

	del(ptr, n, x);
	printAr(ptr, n);

	delete[] ptr;

	return 0;
}