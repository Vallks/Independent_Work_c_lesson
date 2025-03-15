/*Пользователь вводит строку и символ. Удалить все появления  этого символа в строке. При решении использовать методы типа string.*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    char c;
    getline(cin, str);
    cin >> c;

    int n = str.find(c);
    while (n != string::npos)
    {
        str.erase(n, 1);
        n = str.find(c);
    }

    cout << str;

    return 0;
}