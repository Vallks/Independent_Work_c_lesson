/*Нужно вывести на экран числа от 100 до 999. Пользователь вводит шаг и количество столбиков. Числа отделяются пробелами (в конце каждой строки пробелов нет, сразу перевод курсора).

Некорректные исходные данные не проверять!*/
#include <iostream>

using namespace std;

int main()
{
	int shag, colum, sch;

	cin >> shag >> colum;

	sch = 0;

	for (int i = 100; i < 1000; i += shag)
	{
		cout << i;
		sch++;

		if (sch == colum)
		{
			cout << endl;
			sch = 0;

		}
		else
		{
			cout << " ";
		}
	}
	return 0;
}
