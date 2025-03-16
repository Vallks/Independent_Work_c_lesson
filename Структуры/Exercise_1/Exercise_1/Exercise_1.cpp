/*Описать структуру с именем Aeroflot, которая содержит три поля:

номер рейса
название пункта назначения
тип самолета
Объявить две переменные типа Aeroflot и ввести данные в них с консоли. 
Предполагается, что название пункта назначения и тип самолета  не содержат пробелов.  
Затем вывести информацию о рейсе с наибольшим номером (только номер рейса и пункт назначения через пробел).*/
#include <iostream>

using namespace std;

int main() {
	struct Aeroflot
	{
		int num;
		char city[100];
		char name[100];
	};

	Aeroflot a;
	cin >> a.num >> a.city >> a.name;

	Aeroflot b;
	cin >> b.num >> b.city >> b.name;

	if (a.num > b.num)
	{
		cout << a.num << " " << a.city;
	}
	else
	{
		cout << b.num << " " << b.city;
	}
    return 0;
}