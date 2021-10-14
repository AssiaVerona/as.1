// 11 (1).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main() 
{
	int a, b;
	cout << "enter the first variable of integer type" << endl;
	cin >> a;
	cout << "enter the second integer variable" << endl;
	cin >> b;

	if (a != b) 
	{
		a = a + b;
		b = a;
		cout << " the first variable is " << a << endl << " the second variable is " << b;
	}
	else {
		a = b = 0;
		cout << " the first variable is " << a << endl << " the second variable is " << b;
	}
}