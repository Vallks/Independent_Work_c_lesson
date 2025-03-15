/*Введите строку (возможно, с пробелами). Подсчитайте, сколько она содержит символов цифр  и латинских букв (учитываются и прописные, и строчные). Выведите результаты через пробел.*/
#include <iostream>
#include <string.h>

using namespace std;

int count(char* str, int& cnt_let) {

	int cnt = 0;

	for (int i = 0; i < strlen(str); i++)

	{
		if (str[i] > 47 && str[i] < 58)
		{
			cnt++; 
		}
		else if (str[i] > 64 && str[i] < 91)
		{
			cnt_let += 1;
		}
		else if (str[i] > 96 && str[i] < 123)
		{
			cnt_let += 1;
		}
	}

	return cnt;
}

int main() {
	const int len = 100; 
	char str[len];

	fgets(str, len, stdin); 

	int cnt_let = 0, num = 0;
	
	num = count(str, cnt_let);

	cout << num << " " << cnt_let;

	return 0;
}