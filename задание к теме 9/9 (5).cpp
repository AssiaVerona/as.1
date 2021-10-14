// 9 (5).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cout << " Enter an integer " << endl;
	cin >> a;
	if (a >= 0)
	{
		b = (a / 100) + 1;
		cout << b;
	}
	else
	{
		cout << " Сondition not met ";
	}


	return 0;
}