#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int SIZE = 10;
    int ar[SIZE];
    int x;

    cin >> x;
    srand(x);

    for (int i = 0; i < SIZE; i++)
    {
        ar[i] = rand() % 19 - 3;
    }

    for (int i = SIZE-1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                int tmp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << ar[i] << "\t";
    }

    return 0;
}
