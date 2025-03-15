/*Пользователь вводит количество своих друзей, и данные о них.  Для каждого человека указывается фамилия и дата рождения (в виде строк). 
Нужно соединить данные о человеке в одну строку, которая занимает ровно столько памяти, сколько необходимо. Формируется массив указателей на начала строк, как это было показано в предыдущем примере.

Затем вводится фамилия. Нужно отыскать запись с этой фамилией (для простоты предположите, что однофамильцев не будет).  
Если запись найдена, то она выводится полностью (фамилия и дата рождения). Если человека с такой фамилией нет, то выводится "No".

В идеале нужно отсортировать список, а затем использовать бинарный поиск. Но решение с линейным поиском в неотсортированном массиве тоже подойдет. */
#include <iostream>
#include <string.h>

using namespace std;

void sort(char** spisok, int kol)
{
    for (int i = 0; i < kol-1; i++)
    {
        int min = i;
        for (int j = 0; j < kol; j++)
        {
            if (strcmp(spisok[i],spisok[min]) < 0)
            {
                min =i;
            }
        }
        char* temp = spisok[i];
        spisok[i] = spisok[min];
        spisok[min] = temp;
    }
    return;
}

void findFam(char** spisok, char* fam, int kol)
{
    for (int i = 0; i < kol; i++)
    {
        if (strncmp(spisok[i],fam, strlen(fam)) == 0)
        {
            cout << spisok[i];
            return;
        }
    }

    cout << "No";
    return;
}

int main() {
    const int N = 128;
    char fam[N], age[N],**spisok;
    int kol;
    
    cin >> kol;
    
    spisok = new char* [kol];

    for (int i = 0; i < kol; i++)
    {
        cin >> fam;
        cin >> age;
        int len = strlen(fam) + strlen(age) + 1;
        spisok[i] = new char[len];

        strcpy(spisok[i], fam);
        strcat(spisok[i], " ");
        strcat(spisok[i], age);
    }

    char ffam[N];

    cin >> ffam;

    sort(spisok,kol);
    findFam(spisok, ffam, kol);
    
    return 0;
}