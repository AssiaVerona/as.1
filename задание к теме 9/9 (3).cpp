// 9 (3).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	int K, m, N;
	cout << " Enter an integer K in the range from 1 to 365" << endl;
	cin >> K;
	cout << " Enter an integer N in the range from 1 to 7 " << endl;
	cin >> N;
	if ((0 < K) and (K < 366) and (0 < N) and (N < 8))
	{
		cout << endl;
		N = N - 2;
		m = ((K + N) % 7) + 1;
		cout << " weekday number: " << m;
	}
	else
	{
		cout << " You have not met the condition ";
	}

	return 0;
}