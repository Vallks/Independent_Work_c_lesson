/*Опишите структуру Employee (Сотрудник). Для каждого сотрудника нужно хранить ФИО, пол, возраст, стаж работы.

Пользователь вводит исходное количество сотрудников, а затем данные о них. Информация о каждом сотруднике вводится с новой строки, ее части отделяются решеткой ('#'). 

Затем пользователь вводит номер в списке, на место которого нужно вставить данные о новом человеке, а с новой строки - сами данные. 
Если этот номер неверный (меньше единицы или больше текущего числа сотрудников+1), то следует распечатать итоговый список сотрудников, а затем закончить работу программы. 
В противном случае в массив добавляются новые данные, и редактирование списка продолжается до тех пор, пока пользователь не введет неверный номер. 

При выводе списка сотрудников элементы данных отделяются пробелами.

Не забывайте освобождать динамическую память в конце программы!*/
#include <iostream>
#include <string.h>

using namespace std;

struct Employee
{
    char* fio;
    char* pol;
    int age;
    int stag;
};

void readEmp(Employee& emp)
{
    char buf[300];
    
    fgets(buf, 300, stdin);

    char* wrd = strtok(buf, "#\n");
    emp.fio = new char[strlen(wrd) + 1];
    strcpy(emp.fio, wrd);
    
    wrd = strtok(NULL, "#\n");
    emp.pol = new char[strlen(wrd) + 1];
    strcpy(emp.pol, wrd);

    wrd = strtok(NULL, "#\n");
    emp.age = atoi(wrd);

    wrd = strtok(NULL, "#\n");
    emp.stag = atoi(wrd);
}

void addEmp(Employee*& emp, int& n, int k)
{
    Employee itm;
    
    while (cin.get() != '\n');
    readEmp(itm);
    
    Employee *nspisk = new Employee[n + 1];
    int j = 0;
    
    if (k >= n)
    {
        for (int i = 0; i < n; i++, j++)
        {
           nspisk[j] = emp[i];
        }
        nspisk[n] = itm;
    }
    else
    {

        for (int i = 0; i < n; i++, j++)
        {
            if (i == k)
            {
                nspisk[j] = itm;
                j++;
            }
            nspisk[j] = emp[i];
        }
    }

    delete[] emp;

    emp = nspisk;
    n++;

    return;
}

void printEmp(Employee *emp, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << emp[i].fio << " " << emp[i].pol << " " << emp[i].age << " " << emp[i].stag << endl;
    }

    return;
}

int main()
{
    int n;
    
    cin >> n;
    while (cin.get() != '\n');
    
    Employee* spisok = new Employee[n];

    for (int i = 0; i < n; i++)
    {
        readEmp(spisok[i]);
    }

    int c;

    cin >> c;

    while (c > 0 && c <= (n + 1))
    {
        addEmp(spisok, n , c - 1);
        cin >> c;
    }

    printEmp(spisok, n);

    for (int i = 0; i < n; i++)
    {
        delete[] spisok[i].fio;
        delete[] spisok[i].pol;
    }

    delete[] spisok;

    return 0;
}


