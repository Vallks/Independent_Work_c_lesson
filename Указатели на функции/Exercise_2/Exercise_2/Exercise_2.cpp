/*Реализовать три функции, каждая из которых принимает параметр типа double и возвращает результат этого же типа. 
Первая функция вычисляет квадратный корень числа, деленный на 8, вторая - куб числа, а третья - квадрат синуса числа.

В главной функции  введите аргумент функции.
Добавьте меню, в котором пользователь может выбрать желаемую операцию.  При реализации меню используйте массив указателей на функции. Выведите результат операции на консоль.

Вид меню и формат вывода представлены в тесте.*/
#include <iostream>
#include <cmath>

using namespace std;

double funk1(double x)
{
    return sqrt(x) / 8;
}

double funk2(double x)
{
    return pow(x, 3);
}

double funk3(double x)
{
    return pow(sin(x), 2);
}

int menu(void) {
    setlocale(LC_ALL, "rus");
    int answer;

    do {
        cout << "1 - квадратный корень, деленный на 8\n";
        cout << "2 - куб\n";
        cout << "3 - синус в квадрате\n";
        cin >> answer;
        if (answer < 1 || answer> 3)
            cout << "Неверный выбор! Повторите ввод!\n";
    } while (answer < 1 || answer > 3);
    return answer;
}

int main()
{
    double (*f[3])(double) = {funk1, funk2, funk3};
    double x;
    cin >> x;

    int answ;
    answ = menu();
    cout << f[answ - 1](x);
    return 0;
}
