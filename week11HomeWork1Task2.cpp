/*
Задание 2. Написать функцию, которая получает в каче-
стве параметров 2 целых числа и возвращает сумму чисел
из диапазона между ними.
*/

#include <iostream>
using namespace std;

int summv(int a, int b)
{
	int otv = 0;
	for (int i = a + 1; i < b; i++)
	{
		otv += i;
	}
	return otv;
}
void main()
{
	int a, b;
	cout << "Vvedite na4al`noe 4islo ";
	cin >> a;
	cout << "Vvedite kone4noe 4islo ";
	cin >> b;
	cout << "summa ot  " << a << "  do  " << b << " = " << summv(a, b);
}