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
