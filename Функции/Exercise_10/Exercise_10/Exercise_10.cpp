/*Написать функцию order(), которая получает два аргумента и на место первого из них записывает меньшее значение, а на место второго – большее. 
Например, если первый аргумент имеет значение 5, а второй – значение 3, то их нужно поменять местами. Если же  первый равен 3, а второй равен 5, то их значения после вызова не изменятся.

В функции main() продемонстрирована работа этой функции (этот код менять нельзя)!*/
#include <iostream>
using namespace std;

int getsum(int a)
{
    int sum = 0;
    while (a != 0)
    {
        int cyf = a % 10;
        sum += cyf;
        a /= 10;
    }

    return sum;
}

bool ticket(int val, int* s1, int* s2)
{
    *s1 = getsum(val / 1000);
    *s2 = getsum(val % 1000);

    return *s1 == *s2;
}


int main() {
    int value;
    cin >> value;
    int  sum_first, sum_last;
    if (ticket(value, &sum_first, &sum_last)) {
        cout << "HAPPY ";
    }
    else {
        cout << "UNHAPPY ";
    }
    cout << sum_first << " " << sum_last;
    return 0;
}