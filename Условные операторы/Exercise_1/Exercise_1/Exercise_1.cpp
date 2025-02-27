/* Пользователь вводит целое число. Определить, является ли оно четным. Если число четное, нужно вывести YES, а если нечетное NO*/
#include <iostream>

using namespace std;

int main()
{
    int a;

    cin >> a;

	if (a % 2 == 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}

