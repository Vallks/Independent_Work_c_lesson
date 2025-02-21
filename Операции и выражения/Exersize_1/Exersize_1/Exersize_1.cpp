#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    int a;

    cout << "Введите 2-х значное число\n";

    cin >> a;

    cout << a % 10 << endl;
    cout << a / 10 << endl;

    return 0;
}
