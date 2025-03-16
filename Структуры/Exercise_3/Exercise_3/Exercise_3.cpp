/*Опишите структуру Student (фамилия, имя, группа, возраст в годах, средний балл). Создайте массив из 8 элементов типа Student. 
Заполните массив данными, считав их с консоли. Информация о каждом студенте вводится с новой строки, а элементы разделяются одним или несколькими пробелами.

Затем вводится название группы. Вывести список отличников этой группы (средний балл которых больше 8.0).  Подсчитать средний возраст этих отличников. 

Информация о каждом выбранном студенте выводится с новой строки, поля отделяются одним пробелом. 
Средний балл студента не форматируйте. Затем с новой строки выводится средний возраст. Он должен быть откруглен до одного знака после десятичной точки.

Если в указанной группе нет отличников (или вообще нет такой группы), то выводится "Error".*/
#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

struct Student
{
    char fam[50];
    char name[50];
    char grupp[15];
    int age;
    double srBal;
};

int main()
{
    Student arr[8];
    int kol = 0;
    int sum = 0;

    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i].fam >> arr[i].name >> arr[i].grupp >> arr[i].age >> arr[i].srBal;
    }

    char grupp[15];
    cin >> grupp;

    for (int i = 0; i < 8; i++)
    {
        if (arr[i].srBal > 8.0 && strcmp(arr[i].grupp,grupp)==0)
        {
            cout << arr[i].fam << " " << arr[i].name << " " << arr[i].grupp << " " << arr[i].age << " " << arr[i].srBal << endl;
            kol++;
            sum += arr[i].age;
        }
    }

    if (kol == 0)
    {
        cout << "Error";
    }
    else
    {
        cout << fixed << setprecision(1) << (double)sum / kol;
    }

    return 0;
}

