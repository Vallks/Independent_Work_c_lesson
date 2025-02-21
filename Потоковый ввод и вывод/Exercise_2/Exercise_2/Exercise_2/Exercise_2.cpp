#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    double a,b;

    cout << "Введите размер сторон через пробел!\n";

    cin >> a >> b;

    cout << a * b << " " << 2 * a + 2 * b;

    return 0;
}
