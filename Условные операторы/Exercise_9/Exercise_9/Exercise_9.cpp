/*Пользователь вводит целое число - номер дня недели. Нужно вывести  "Working day", если это рабочий день, 
"Saturday" - если суббота, и "Sunday" - если воскресенье. При неправильном номере дня недели  выводится "Error".

Используйте оператор switch. Нумерация дней недели  - с понедельника (номер 1).*/
#include <iostream>

using namespace std;

int main()
{
    short c;

    cin >> c;

	switch (c)
	{
	case 1: case 2: case 3: case 4: case 5:
		cout << "Working day";
		break;
	case 6:
		cout << "Saturday";
		break;
	case 7:
		cout << "Sunday";
		break;
	default:
		cout << "Error";
		break;
	}

	return 0;
}
