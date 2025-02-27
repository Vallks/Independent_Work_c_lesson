/*Известно, что 1 дюйм равен 2,54 см. Пользователь вводит 1, если хочет перевести дюймы в сантиметры, и 2 - если нужен перевод сантиметров в дюймы.
Затем он вводит расстояние (в дюймах или сантиметрах соответственно). 
Нужно вывести результат перевода из одних единиц измерения в другие. Результат округлите до двух знаков после запятой.*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int option;
    const double koef = 2.54;

    cin >> option;

    double distance;

    if (option == 1)
    {
        cin >> distance;
        cout << fixed << setprecision(2) << distance * koef;
    }
    else
    {
       cin >> distance;
       cout << fixed << setprecision(2) << distance / koef;
    }
    
    return 0;
}
