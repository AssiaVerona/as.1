// 9 (4).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	int A, B, C, S1, S2, k;
	cout << " Enter the values: A, B, C " << endl;
	cin >> A >> B >> C;
	if ((A > 0) and (B > 0) and (C > 0))
	{
		S1 = A * B;
		S2 = C * C;
		k = S1 / S2;
		cout << " Number of squares = " << k;
	}
	else
	{
		cout << " Data entered incorrectly ";
	}

	return 0;
}