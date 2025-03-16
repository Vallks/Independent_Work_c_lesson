/*Пользователь вводит количество записей, а затем  сами записи об учениках (фамилия и имя, разделенные пробелами).
Создайте массив записей, который затем отсортируйте по алфавиту и выведите на консоль (каждая запись с новой строки).

Для решения этой задачи можно использовать как строки в стиле С (динамически размещаемые в памяти), так и класс string. */
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;

    cin >> n;
    while (cin.get() != '\n');

    string* strm = new string[n];

    for (int i = 0; i < n; i++)
    {
        getline(cin, strm[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strm[j] > strm[j + 1])
            {
                string tmp = strm[j];
                strm[j] = strm[j + 1];
                strm[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << strm[i] << endl;
    }

    return 0;
}

