// 13.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	cout << "Introduce an integer N ";
	int t = -1, n, sum = 0;
	cin >> n;
	while (t < 2 * n - 1) 
	{
		t = t + 2;
		sum = sum + t;
		cout << sum << endl;
	}
}