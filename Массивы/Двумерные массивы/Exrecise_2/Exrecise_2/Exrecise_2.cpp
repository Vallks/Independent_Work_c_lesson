/*Элементы двумерного массива из 3 строк и 6 столбцов заполнить случайными целыми значениями от 0 до 5 (начальное значение генератора запросить у пользователя).  
Вывести исходный массив. Элементы в строке разделять знаками табуляции (этот знак должен быть и в конце каждой строки).

Для каждой строки распечатать индекс первого нулевого элемента ( или слово "no")*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int ROW = 3;
    const int COL = 6;

    int ar[ROW][COL];
    int ar_res[ROW];

    int x;

    cin >> x;

    srand(x);

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            ar[i][j] = rand() % 6;
            cout << ar[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < ROW; i++)
    {
        ar_res[i] = -1;

        for (int j = 0; j < COL; j++)
        {
            if (ar[i][j] == 0)
            {
                ar_res[i] = j;
                break;
            }
        }
    }

    for (int i = 0; i < ROW; i++)
    {
        if (ar_res[i] == -1)
        {
            cout << "no\n";
        }
        else
        {
            cout << ar_res[i] << endl;
        }
    }

    return 0;
}
