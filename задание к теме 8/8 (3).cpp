// 8 (3).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int A, B, T, t;
	cout << "Enter numbers A and B (A > B)" << endl;
	cin >> A >> B;
	if (A > B)
	{
		T = A / B;
		t = A - T*B;
		cout << "length of unoccupied part of segment A = " << t;
	}
	else
	{
		cout << "You have not met the conditions";
	}
	return 0;
}
