#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    int a, b;
    
    cout << "Введите 2 числа через пробел!\n";

    cin >> a >> b;

    cout << a + b;

    return 0;
}

