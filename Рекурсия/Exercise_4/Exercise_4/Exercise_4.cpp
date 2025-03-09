/*Напишите функцию, которая вычисляет сумму цифр целого числа, которое она получает в качестве параметра. Используйте рекурсию.

Число может быть отрицательным! Но  сумма цифр всегда положительна. Т.е. для числа -251 сумма цифр 8.*/
#include <iostream>
#include <cmath>

using namespace std;

int sumOfNumbers(int number)
{
    number = abs(number);

    // Базовый случай: если число состоит из одной цифры, возвращаем его
    if (number < 10) {
        return number;
    }
    // Рекурсивный случай: последняя цифра + сумма цифр оставшегося числа
    return (number % 10) + sumOfNumbers(number / 10);
 }


int main() {
    int n;
    cin >> n;
    cout << sumOfNumbers(n);
    return 0;
}

