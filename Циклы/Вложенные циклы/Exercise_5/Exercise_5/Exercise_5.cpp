// Вывести на экран таблицу умножения от 1 до k.  Значение k (k<10) вводит пользователь.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int k;

	cin >> k;

	for (int i = 1; i <= k; i++)
	{
		for (int j = 1; j <= k ; j++)
		{
			cout << setw(3) << left << i * j;
		}

		cout  <<endl;
	}

	return 0;
}