/*Алгоритм Евклида для определения наибольшего общего делителя.
Находим остаток от деления большего числа на меньшее.
Затем меньшее число заменяет большее, а остаток - меньшее.  Процесс продолжается  до тех пор, пока остаток не равен 0.
Последний остаток и есть наибольший общий делитель. */
#include <iostream>\

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a, b;
	
	cin >> a >> b;
	
	int max, min, ost;
	
	max = a > b ? a : b;
	min = a < b ? a : b;
	
	while (max % min != 0)
	{
		ost = max % min;
		max = min;
		min = ost;
	}
	
	cout << min;
	
	return 0;
}