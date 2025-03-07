/*Напишите функцию, которая определяет сумму цифр целого числа. В функции main() продемонстрировано использование этой функции.

Учтите, что числа могут быть и отрицательные!*/
#include <iostream>
using namespace std;

int sumOfNumbers(int value)
{
    int sum = 0;

    while (value != 0)
    {
        int cyf = value % 10;
        sum += cyf;
        value /= 10;
    }

    return abs(sum);
}

int main() {
    int value;
    for (int i = 0; i < 5; i++) {
        cin >> value;
        cout << sumOfNumbers(value) << " ";
    }
    return 0;
}