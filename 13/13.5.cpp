// 13.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout << "1 - A + A^2 - A^3 + ... A^n" << endl << "enter number A and integer N: ";
	int a, n;
	cin >> a >> n;
	int t = 0, sum = 1, f = 1;
	while (t < n) 
	{
		t = t + 1;
		f = f * a * -1;
		sum = sum + f;
	}
	cout << sum;
}