/*Нужно написать функцию  maximum(), которая возвращает указатель на первый максимальный элемент массива. Чтобы функция работала с массивами любого типа, используйте шаблон. 

Также напишите функцию read(), которая вводит элементы массива, а также функцию print(), которая выводит элементы массива на консоль в одну строку, отделяя их пробелами 
(пробел и после последнего элемента массива, а затем курсор переводится на новую строку). Используйте формат вывода по умолчанию для cout (не задавайте формат).

В функции main() объявите массив из целых чисел типа int из 10 элементов, массив типа  double из  7 элементов и массив типа char из 5 элементов. 
Введите данные в эти массивы. Затем найдите в каждом из них максимум и замените его нулем (для массивов int и double) либо пробелом (для массива типа char). Выведите преобразованные массивы на консоль.*/
#include <iostream>
using namespace std;

template <typename myType>
void read(myType* ar, int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
	}
}

template <typename myType>
void print(myType* ar, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << ar[i] << " ";
	}
	cout << endl;
}

template <typename myType>
myType* maximum(myType* ar, int n)
{
	myType* max = ar;

	for (int i = 0; i < n; i++)
	{
		if (*max < ar[i])
		{
			max = ar + i;
		}
	}
	
	return max;
}

int main() {
	const int N = 10;
	const int M = 7;
	const int K = 5;
	int a[N], *maxi;
	double b[M], *maxd;
	char c[K], *maxc;

	read(a, N);
	read(b, M);
	read(c, K);

	maxi = maximum(a, N);
	maxd = maximum(b, M);
	maxc = maximum(c, K);

	*maxi = *maxd = 0;
	*maxc = ' ';

	print(a, N);
	print(b, M);
	print(c, K);

    return 0;
}