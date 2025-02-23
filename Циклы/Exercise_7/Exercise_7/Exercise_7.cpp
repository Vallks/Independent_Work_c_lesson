/*Пользователь вводит натуральное число. Если это число простое, вывести YES, в противном случае вывести NO. Число называется простым, если оно делится только на себя и на единицу. Единица не является простым числом.*/
#include <iostream>
using namespace std;

int main()
{
    int x, count;

    count = 0;

	cin >> x;

	for (int i = 1; i <= x; i++)
	{
		if (x % i == 0)
		{
			count++;
		}
	}

	if (count != 2)
	{
		cout << "NO";
	}
	else
	{
		cout << "YES";
	}

	return 0;
}
