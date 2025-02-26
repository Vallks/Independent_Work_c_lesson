/*Пользователь вводит с клавиатуры три вещественных числа. Подсчитать их сумму, произведение и среднее арифметическое. Каждый результат должен быть выведен с новой строки. 
При этом все результаты должны быть выведены на консоль с фиксированной точкой и иметь три десятичных знака в дробной части.*/
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
