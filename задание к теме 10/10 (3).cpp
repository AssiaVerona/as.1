// 10 (3).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main() 
{
	int A;
	cout << "enter a positive integer"<< endl;
	cin >> A;



	if (((A % 2) == 0) and ( A > 9) and (A < 100))
	{
		cout << " true ";
	}
	else
	{
		cout << " folse ";
	}
}