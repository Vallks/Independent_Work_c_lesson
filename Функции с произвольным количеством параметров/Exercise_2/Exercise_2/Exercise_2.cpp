/*Напишите функцию mymax() с переменным числом параметров, которая вычисляет максимум нескольких чисел. Функция возвращает значение типа double. 
Первым обязательным параметром является количество анализируемых чисел. Второй обязательный параметр - это признак типа этих чисел. Если это символ 'd', то все следующие числа имеют тип int. Если же это символ 'f' - то числа вещественные и имеют тип double.

В функции main() продемонстрировано несколько примеров вызова этой функции.*/

//#include <iostream>
//#include <stdarg.h>
//using namespace std;
//
//double mymax(int n, char c, ...)
//{
//    va_list p;
//    va_start(p, c);
//    double mmax;
//    if (c == 'f')
//    {
//        double max = va_arg(p, double), a; 
//        for (int i = 0; i < n -1 ; i++)
//        {
//            if(a > max)
//            {
//                max = a;
//            }
//            a = va_arg(p, double);
//        }
//        mmax = max;
//    }
//    else
//    {
//        int max = va_arg(p, int), a;
//        for (int i = 0; i < n - 1; i++)
//        {
//            if (a > max)
//            {
//                max = a;
//            }
//            a = va_arg(p, int);
//        }
//        mmax = max;
//    }
//
//    return mmax;
//}

//решение через шаблон 3 параметр наш тип передаваемый

#include <iostream>
#include<stdarg.h>
using namespace std;
template<typename T>
T mymax(int n, char type, T x, ...) {
    va_list p; //объявляем указатель нa параметр
    va_start(p, x); //устанавливаем этот указатель после явного параметра a
    T max = x; //считываем параметр и переходим к следующему 
    for (int i = 0; i < n - 1; i++) {
        x = va_arg(p, T);
        if (x > max)
            max = x;
    }
    va_end(p);
    return max;
}

int main() {
    cout << mymax(5, 'd', 3, 6, 7, -2, 1) << endl;
    cout << mymax(3, 'f', -2.3, 3.14, 0.72) << endl;
    cout << mymax(6, 'f', -13., 0.23, 6.6, 4.56, 0.0, -1.1);
    return 0;
}


