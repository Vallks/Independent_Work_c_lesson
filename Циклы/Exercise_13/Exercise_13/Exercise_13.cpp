/*Ввод последовательности чисел заканчивается 0.
Программа должна подсчитать сумму тех чисел, порядковые номера которых являются простыми числами. 
Нумерация чисел начинается с единицы (и единица не является простым числом).*/
#include <iostream>

using namespace std;

int main()
{
	int ch, sum , por , sch;

	sum = 0;
	por = 1;

	cin >> ch;

	while (ch != 0)
	{
		sch = 0;

		for (int i = 1; i <= por; i++)
		{
			if (por % i == 0)
			{
				sch++;
			}
		}

		if (sch == 2)
		{
			sum += ch;
		}

		por++;

		cin >> ch;
	}

	cout << sum;

	return 0;
}
