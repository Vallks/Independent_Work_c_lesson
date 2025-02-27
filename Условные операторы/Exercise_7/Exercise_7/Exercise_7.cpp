/*Напишите программу, которая вводит 5 целых чисел, и выводит значение наименьшего из них.*/
#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, f;

    cin >> a >> b >> c >> d >> f;

    int min;

    min = a;

    if (b < min)
    {
        min = b;
    }

    if (c < min)
    {
        min = c;
    }

    if (d < min)
    {
        min = d;
    }

    if (f < min)
    {
        min = f;
    }
    
    cout << min;

    return 0;
}
