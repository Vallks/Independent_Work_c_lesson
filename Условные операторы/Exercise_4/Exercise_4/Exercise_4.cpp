#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x;

    cin >> x;

    double res;

    res = sin(x);

    if (x >= 5)
    {
        res = pow(log10(2 * x), 2);
    }
    if (x < -2)
    {
        res = 2 * pow(x, 2);
    }

    cout << fixed << setprecision(2) << res;

    return 0;
}