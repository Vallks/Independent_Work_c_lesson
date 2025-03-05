/*Описать функцию, которая возводит x в степень y (где x и y – целые числа, y>0). Использовать эту функцию для вывода на консоль кубов чисел от 2 до 10.*/
#include <cmath>
#include <iostream>

using namespace std;

void kub(int);

int main() 
{
	for (int i = 2; i < 11; i++)
	{
		kub(i);
	}
    
    return 0;
}

void kub(int x)
{
	cout << pow(x, 3) << " ";
}
