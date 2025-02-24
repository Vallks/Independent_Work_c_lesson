/*Пользователь вводит цену товара за килограмм (вещественное число) Программа выводит на экран таблицу стоимости в диапазоне от 100 грамм до 1 кг с шагом 100 грамм.

Элементы в строке отделяйте знаком табуляции. Стоимость округляйте до двух знаков после десятичной точки.*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	
	double cena, cena100gr;

	cin >> cena;

	cena100gr = cena / 10;

	cout << "Вес(гр)" << "\t" << "Стоимость(руб)\n";
	
	for (int i = 1; i < 11; i++)
	{
		cout <<  i * 100 << "\t" << fixed << setprecision(2) << i * cena100gr << "\n";
	}

	return 0;
}
