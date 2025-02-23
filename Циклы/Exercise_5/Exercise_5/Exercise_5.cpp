#include <iostream>

using namespace std;

int main()
{
	int x, count;

	count = 0;

	do
	{
		cin >> x;

		if (x % 2 == 0)
		{
			count++;
		}

	} while (x != -99);

	cout << count;

	return 0;
}