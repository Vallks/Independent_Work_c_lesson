#include <iostream>
using namespace std;

int main() {
	int c;

	cin >> c;
	bool isFirst = true;

	for (int j = c; j >= 0; j--) {
		
		if (isFirst == false && j > c / 2)
		{
			cout << "\n";
		}
		else
		{
			isFirst = false;
		}

		for (int i = 1; i <= j; i++) {
		
			if (i <= (c - j))
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
	}
	
	return 0;
}
