/*Напишите функцию, которая выводит цифры положительного целого числа слева направо, отделяя их пробелами.Используйте рекурсию.*/
#include <iostream>
using namespace std;

void printNumber(int k)
{
    if(k <= 0)
    {
        return;
    }
    int cyf = k % 10;
    printNumber(k / 10);
    cout << cyf << " ";

    return;
}

int main() {
    int k;
    cin >> k;
    printNumber(k);
    return 0;
}
