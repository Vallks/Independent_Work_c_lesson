/*Пользователь вводит высоту треугольника. Вывести на консоль треугольник следующего вида:*/
#include <iostream>

using namespace std;

int main()
{
	int x, len;

	len = 0;

	cin >> x;

	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= x; j++)
		{
			if (x - len <= j)
			{
				cout << '*';
			}
			else
			{
				cout << ' ';
			}
		}
		
		cout << endl;
		len++;
	}

	return 0;
}
