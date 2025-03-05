/*Напишите функцию, которая выводит на экран рамку из звездочек. В качестве параметров в функцию передаются ширина и высота рамки. После вывода рамки курсор должен перейти на новую строку.

Пример использования функции, которую нужно написать, приведен в заготовке кода. */
#include <iostream>

using namespace std;

void frame(int, int);

int main() {
    int l, h;
    cin >> l >> h;
    if (l <= 0 || h <= 0) return 1;
    frame(l, h);
    return 0;
}

void frame(int l, int h)
{
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if (i == 0 || i == h - 1)
            {
                cout << "*";
            }
            else if (j == 0 || j == l - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}