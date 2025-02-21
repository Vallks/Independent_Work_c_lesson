#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    int a;

    cout << "Введите количество секунд\n";

    cin >> a;

    cout << a / 3600 << endl;
    cout << a / 60 % 60 << endl;
    cout << a % 60 << endl;

    return 0;
}