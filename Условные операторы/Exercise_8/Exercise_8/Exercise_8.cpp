#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
    int n;

    cin >> n;

	switch (n)
	{
	case 1: case 2: case 12:
		cout << "Зима";
		break;
	case 3: case 4: case 5:
		cout << "Весна";
		break;
	case 6: case 7: case 8:
		cout << "Лето";
		break;
	case 9: case 10: case 11:
		cout << "Осень";
		break;
	default:
		cout << "Ошибка";
		break;
	}

	return 0;
}
