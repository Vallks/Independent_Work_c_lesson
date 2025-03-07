/*Создайте шаблон для функции division(), которая  делит одно число на другое (возможно, разных типов). 
При этом тип результата функции должен соответствовать "большему"  из двух типов. Т.е., если хотя бы один из параметров имеет вещественный тип, то результат - вещественный. 
Если же оба параметра целые - то результат тоже целый. 

В примере использования функции division() для проверки корректности результата выводится значение функции и первая буква названия типа.*/
#include <iostream>
using namespace std;
#include <typeinfo>

template <typename Typ1, typename Typ2>
auto division(Typ1 a, Typ2 b) -> decltype(a + b)
{
    return a / b;
}

int main() {
    int a, b;
    double x;
    float z;
    cin >> a >> b;
    cin >> x;
    cin >> z;
    cout << division(a, b) << " " << typeid(division(a, b)).name() << endl;
    cout << division(x, b) << " " << typeid(division(x, b)).name() << endl;
    cout << division(x, z) << " " << typeid(division(x, z)).name() << endl;
    cout << division(z, b) << " " << typeid(division(z, b)).name() << endl;
    return 0;
}