/*Вычислить формулы
программа сначала вводит значение вещественной переменной а, выводит z и на следующей строке y.*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    double a;

    cout << "Введите число!\n";

    cin >> a;

    cout << 2. * pow(sin(3. * atan(1) * 4 - 2. * a), 2) * pow(cos(5. * atan(1) * 4 + 2. * a), 2) << endl;

    cout << 1 / 4. - 1 / 4. * sin(5. / 2. * atan(1) * 4 + 8. * a) << endl;

    return 0;
}
