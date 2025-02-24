/*Ввод последовательности натуральных чисел заканчивается нулем. 
Среди введенных чисел найти наибольшее по сумме цифр (если есть несколько чисел с данной суммой цифр, то берем первое).
Вывести это число и его сумму цифр, отделяя одним пробелом.*/
#include <iostream>

using namespace std;

int main()
{
	int max_number, max_sum, current_number, current_sum, current_cifr, x;
	
	max_number = max_sum = 0;

	while (true)
	{
		cin >> current_number;

		if (current_number == 0)
		{
			break;
		}

		x = current_number;

		current_sum = 0;
		
		while (current_number > 0)
		{
			current_cifr = current_number % 10;
			current_sum += current_cifr;
			current_number = current_number / 10;
		}

		if (max_sum < current_sum)
		{
			max_sum = current_sum;
			max_number = x;
		}
	}

	cout << max_number << " " << max_sum;

	return 0;
}

