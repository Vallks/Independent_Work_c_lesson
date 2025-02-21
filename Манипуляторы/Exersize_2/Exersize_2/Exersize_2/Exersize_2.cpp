#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    double a, b, c;

    cout << "Введите 3 вещественных числа через пробел!\n";

    cin >> a >> b >> c;

    cout << fixed << setprecision(3) << a + b + c << endl;
    cout << fixed << setprecision(3) << a * b * c << endl;
    cout << fixed << setprecision(3) << (a + b + c) / 3 << endl;

    return 0;
}
