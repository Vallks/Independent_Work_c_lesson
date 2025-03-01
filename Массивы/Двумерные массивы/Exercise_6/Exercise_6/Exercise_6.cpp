/*Элементы двумерного массива из 5 строк и 4 столбцов заполнить случайными целыми значениями от 2 до 30 (начальное значение генератора запросить у пользователя).  
Вывести исходный массив. Элементы в строке разделять знаками табуляции.

Вывести пустую строку (cout<<endl;)

Поменять местами первую и последнюю строки массива. Вывести преобразованный массив на консоль, отделяя элементы в строках знаками табуляции.*/
#include <iostream>
#include <cstdlib>

int main()
{
    const int ROW = 5;
    const int COL = 4;
    int x;

    int ar1[ROW][COL];

    std::cin >> x;

    std::srand(x);

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            ar1[i][j] = rand() % 29 + 2;
            std::cout << ar1[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    
    std::cout << std::endl;
    
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (i == 0) 
            {
                std::cout << ar1[4][j] << "\t";
            }
            else if(i == 4)
            {
                std::cout << ar1[0][j] << "\t";
            }
            else
            {
                std::cout << ar1[i][j] << "\t";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}