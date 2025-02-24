#include <iostream>

using namespace std;

int main()
{
    int c;

    cin >> c;

	for (int i = 1; i < 9; i++)
	{
		for (int z = 1; z <= c; z++)
		{
			for (int j = 1; j < 9; j++)
			{
				for (int x = 1; x <= c; x++)
				{
					if (i % 2 == 0)
					{
						if (j % 2 == 0)
						{
							cout << "-";
						}
						else
						{
							cout << "*";
						}
					}
					else
					{
						if (j % 2 == 0)
						{
							cout << "*";
						}
						else
						{
							cout << "-";
						}
					}
				}
			}
			cout << endl;
		}
	}

	return 0;
}
