/*Объявить структуру Tovar (название товара, страна-производитель, цена).  Создать массив из 7 элементов типа Tovar. Заполнить массив данными, считав их с консоли. 
Информация о каждом товаре вводится с новой строки, а элементы разделяются одним или несколькими пробелами.

Затем вводится название страны. На консоль выводится список товаров, произведенных в этой стране (каждый товар с новой строки). 
И затем с новой строки выводится средняя цена на товары из этой страны. Среднюю цену представьте с двумя знаками после точки.

Если же товаров из этой страны нет в списке, нужно вывести на консоль слово "Error".*/
#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

struct Tovar
{
    char name[50];
    char strana[50];
    double cena;
};

int main() {
    Tovar spisok[7];

    for (int i = 0; i < 7; i++)
    {
        cin >> spisok[i].name >> spisok[i].strana >> spisok[i].cena;
    }

    char str[50];
    int k = 0;
    double sum = 0;
    cin >> str;

    for (int i = 0; i < 7; i++)
    {
        if (strcmp(spisok[i].strana, str) == 0)
        {
            cout << spisok[i].name << " " << spisok[i].strana << " " << spisok[i].cena << endl;
            k++;
            sum += spisok[i].cena;
        }
    }

    if (k != 0)
    {
        cout << fixed << setprecision(2) <<sum / k;
    }
    else
    {
        cout << "Error";
    }
    return 0;
}