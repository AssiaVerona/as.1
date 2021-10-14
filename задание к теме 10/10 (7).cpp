// 10 (7).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main() 
{
	int a, b, c;
	cout << " enter a, b, c" << endl;
	cin >> a >> b >> c;
	cout << "Verification of the truth of the statement: There is a triangle with sides a, b, c" << endl;
	if ((a + b) > c and (a + c) > b and (b + c) > a) 
	{
		cout << "true";
	}
	else 
	{
		cout << "folse";
	}
}