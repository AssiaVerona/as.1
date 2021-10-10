// 8 (2).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int A, B, t;
	cout << "Enter numbers A and B (A > B)" << endl;
	cin >> A >> B;
	if (A > B)
	{
		t = A / B;
		cout << "The number of segments = " << t;
	}
	else
	{
		cout << "You have not met the conditions";
	}
	return 0;
}
