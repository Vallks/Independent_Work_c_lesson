/*Напишите перегруженную функцию mySum для реализации различных способов сложения дробных чисел:

сложение десятичных дробей (два параметра типа double)
сложение натуральных дробей (четыре параметра типа int: числитель и знаменатель первой дроби, затем числитель и знаменатель второй дроби)
Результат функции mySum в любом случае имеет тип double.*/
#include <iostream>
using namespace std;
double mySum(double, double);
double mySum(int, int, int, int);
int main() {
    double x, y;
    int a, b, c, d;
    cin >> x >> y >> a >> b >> c >> d;
    cout << mySum(x, y) << endl;
    cout << mySum(a, b, c, d) << endl;
    return 0;
}

double mySum(double a, double b)
{
    return a + b;
}
double mySum(int a, int b, int c, int d)
{
    return (double)a / b + (double)c / d;
}