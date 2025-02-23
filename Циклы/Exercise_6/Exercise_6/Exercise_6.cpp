/*Пользователь вводит с клавиатуры целое неотрицательное число. Нужно вывести через пробел количество цифр в данном числе и сумму цифр.*/
#include <iostream>

using namespace std;

int main()
{
	int x, y, z, count, sum, sc;

	count = 0;
	sum = 0;
	sc = 10;

	cin >> x;

	do
	{
		
		count++;
		sum += x % sc;
		x = x / sc;

	} while (x%sc != 0);

	cout << count << " " << sum;

	return 0;
}