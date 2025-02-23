#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    double res = 1;

    if (a == b && a % 2)
        res = a;
    else if (a == b)
    {
        res = 0;
    }
    else if (a < b)
    {
        while (a <= b)
        {
            if (a % 2)
            {
                res *= a;
            }
            a++;
        }
    }
    else if (a > b)
    {
        while (a >= b)
        {
            if (a % 2)
            {
                res *= a;
            }
            a--;
        }
    }

    cout << res;

    return 0;
}

