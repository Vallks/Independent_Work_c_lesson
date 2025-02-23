#include <iostream>

using namespace std;

int main()
{
    int x, y, min;

	cin >> x >> y;

	min = x;

	if (y < min)
	{
		min = y;
	}

	for (int i = 1; i < min; i++)
	{
		if (x%i == 0 && y%i == 0)
		{
			cout << i << " ";
		}
	}

  	return 0;
}

