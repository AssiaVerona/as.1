// 9 (2).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	int K, m, N;
	cout << " Enter an integer K in the range from 1 to 365" << endl;
	cin >> K;
	
	if ((0 < K) and (K < 366))
	{
		cout << endl;
		m = K % 7;
		cout << " weekday number: " << m;
	}
	else
	{
		cout << " You have not met the condition ";
	}

	return 0;
}