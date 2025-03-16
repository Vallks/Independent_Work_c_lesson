/*Опишите структуру Book (название книги, автор, год издания, цена ). Создайте массив книг из 6 элементов.
Заполните массив данными, считав их с консоли. Информация о каждой книге вводится с новой строки, а элементы разделяются точкой с запятой.

Затем пользователь вводит год издания. Нужно вывести все книги этого года издания на консоль (данные разделяются символом '/', информация о каждой книге с новой строки). 
Также подсчитать среднюю цену на книги, изданные в этом году. Средняя цена выводится на консоль с округлением до двух знаков после десятичной точки.

Если в массиве отсутствуют  данные по введенному году издания, то следует вывести на консоль "ERROR".

Рекомендация. Можно ввести данные о книге одной строкой, а затем для  разбора строки использовать функцию strtok(). А для преобразования строки в число использовать atoi() и atof(). */
#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

struct Book
{
	char name[128];
	char avtor[128];
	int god;
	double cena;
};

int main() {
	Book arr[6];
	char tmp [500];

	for (int i = 0; i < 6; i++)
	{
		fgets(tmp,500, stdin);
		char* ptr = strtok(tmp, ";\n");
		strcpy(arr[i].name, ptr);
		ptr = strtok(NULL, ";\n");
		strcpy(arr[i].avtor, ptr);
		ptr = strtok(NULL, ";\n");
		arr[i].god = atoi(ptr);
		ptr = strtok(NULL, ";\n");
		arr[i].cena = atof(ptr);
	}

	int god, kol = 0;
	double sum = 0;
	cin >> god;

	for (int i = 0; i < 6; i++)
	{
		if (god == arr[i].god)
		{
			cout << arr[i].name << "/" << arr[i].avtor << "/" << arr[i].god << "/" << arr[i].cena << endl;
			kol++;
			sum += arr[i].cena;
		}
	}

	if (kol == 0)
	{
		cout << "ERROR";
	}
	else
	{
		cout << fixed << setprecision(2) << sum / kol;
	}

	return 0;
}