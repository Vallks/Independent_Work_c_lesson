#include <iostream>

using namespace std;

int main()
{
    int x;
    int sch = 0, count = 0;
    while (sch < 6)
    {
        cin >> x;
        if (x % 2 && x != 0)
        {
            count++;
        }
        sch++;
    }

    cout << count;

    return 0;
}

