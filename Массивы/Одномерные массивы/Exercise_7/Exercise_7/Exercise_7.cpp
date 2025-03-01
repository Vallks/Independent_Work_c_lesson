/*Пользователь вводит начальное значение генератора случайных чисел. 
Сформируйте массив из 10 элементов, заполнив его случайными числами от 0 до 15. Массив выведите на консоль, отделяя элементы пробелами. Пробел должен быть и в конце массива.

Найдите последний максимальный элемент в массиве и подсчитайте среднее арифметическое элементов, расположенных перед ним. 
Этот результат округлите до одного знака после десятичной точки и выведите с новой строки.

Если максимальный элемент имеет нулевой индекс, то ответ должен быть ERROR.*/
#include <iostream>
#include <cstdlib>
#include <iomanip>

int main()
{
    const int SIZE = 10;
    int ar[SIZE];
    int x, max, sum;

    std::cin >> x;
    srand(x);

    for (int i = 0; i < SIZE; i++)
    {
        ar[i] = rand() % 16;
        std::cout << ar[i] << " ";
    }

    max = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (ar[max] <= ar[i])
        {
            max = i;
        }
    }

    if (max == 0)
    {
        std::cout << std::endl << "ERROR";
        return 0;
    }

    sum = 0;

    for (int i = 0; i < max; i++)
    {
        sum += ar[i];
    }

    std::cout << std::endl << std::fixed << std::setprecision(1) << (double)sum / max;

    return 0;
}

