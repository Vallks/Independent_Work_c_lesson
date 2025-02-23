#include <iostream>

using namespace std;

int main()
{
	int x, y;

	char c;

	cin >> x >> y >> c;

	if (y < 0 || x < 1 || x > 2)
	{
		cout << "ERROR";

		return 0;
	}

	for (int i = 1; i <= y; i++)
	{
		if (x == 1)
		{
			cout << c << endl;
		}
		else
		{
			cout << c;
		}
	}

	return 0;
}