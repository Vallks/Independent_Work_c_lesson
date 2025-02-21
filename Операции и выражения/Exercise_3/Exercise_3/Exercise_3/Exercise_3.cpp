#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    int a;

    cout << "Введите сумму\n";

    cin >> a;

    cout << a * 5 / 100 + 100 << endl;

    return 0;
}