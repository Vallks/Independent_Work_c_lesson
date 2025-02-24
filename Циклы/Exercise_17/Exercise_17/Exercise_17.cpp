#include <iostream>

using namespace std;

int main()
{
    int n, k, muhi, minut, muhi_itog;

    cin >> n >> k;

    muhi = n;

    minut = 0;

    while (muhi > 0)
    {
        if (minut < k)
        {
            muhi_itog = muhi;
        }
        
        minut++;

        if (muhi > 0.1 * n)
        {
            muhi--;
        }
        else
        {
            muhi -= 2;
        }

        if (minut % 5 == 0 && muhi > 0)
        {
            muhi++;
        }
    }

    cout << muhi_itog << " " << minut;

    return 0;
}