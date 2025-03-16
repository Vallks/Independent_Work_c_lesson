/*Пользователь вводит строку, которая может содержать пробелы. Затем с новой строки пользователь вводит контрольное слово.

Нужно удалить из исходной строки все появления этого слова. Пробелы должны остаться на своем месте. Должны быть удалены как отдельные слова, так и части слов.

Используйте тип string для работы со стоками.*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str,pstr;
    getline(cin, str);
    getline(cin, pstr);
   
    size_t p = str.find(pstr);
    while (p != string::npos)
    {
        str.erase(p, pstr.length());
        p = str.find(pstr);
    }

    cout << str;
    return 0;
}