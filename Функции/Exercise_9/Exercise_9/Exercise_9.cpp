/*Написать функцию deposit(), которая вычисляет накопленную на депозите сумму по формуле
S=P∗(1+r)^n
где Р - величина вклада, n - срок вклада (количество лет), а r - годовая процентная ставка в долях. Например, если банк назначает 9% годовых, то r=0.09, а если 23%, то r=0.23 и т.д.
В функции main() продемонстрировать ее работу: ввести исходные данные (сначала исходный вклад, потом процентную ставку в процентах  и число лет). Затем вычислить накопленную сумму и вывести ее на консоль, округлив до двух  знаков после десятичной точки.*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
double deposit(double vklad, int per, int god)
{
	return vklad * pow(1 + (double)per / 100, god);
}

int main() {
	int per, god;
	double vklad;

	cin >> vklad >> per >> god;

	cout << fixed << setprecision(2) << deposit(vklad, per, god);
	return 0;
}