// 9 (4).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>

using namespace std;

int main()
{
	int A, B, C, S1, S2, k, d, r1, r2;
	cout << " Enter the values: A, B, C " << endl;
	cin >> A >> B >> C;
	if ((A > 0) and (B > 0) and (C > 0))
	{
		r1 = A/C;
		r2 = B/C;
		S1 = r1 * r2;
		S2 = A * B - C*C*S1;
		cout << " Number of squares = " << S1 << endl << "unoccupied area of ​​the rectangle = " << S2;
	}
	else
	{
		cout << " Data entered incorrectly ";
	}

	return 0;
}
