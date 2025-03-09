/*Напишите функцию myswap(), которая переставляет местами значения переменных одинаковых типов. Функция должна работать для параметров типа int, double и char.

В функции main() продемонстрировано использование этой функции: вводятся значения переменных, которые затем попарно меняются значениями и выполняется вывод результата на консоль.*/
#include <iostream>
using namespace std;

template <typename myType>
void myswap(myType& a, myType& b)
{
    myType tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int k, m;
    double x, y;
    char c, d;
    cin >> k >> m >> x >> y >> c >> d;
    myswap(k, m);
    cout << "k= " << k << " m= " << m << endl;
    myswap(x, y);
    cout << "x= " << x << " y= " << y << endl;
    myswap(c, d);
    cout << "c= " << c << " d= " << d << endl;
    return 0;
}