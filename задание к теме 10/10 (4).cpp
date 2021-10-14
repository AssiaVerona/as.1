// 10 (4).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	int A;
	cout << "enter a three-digit number" << endl;
	cin >> A;

	if ((A / 100) > (A % 100 / 10) and (A % 100 / 10) > (A % 10) or (A / 100) < (A % 100 / 10) and (A % 100 / 10) < (A % 10)) 
	{
		cout << " true ";
	}
	else
	{
		cout << " folse ";
	}
}