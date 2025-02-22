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
