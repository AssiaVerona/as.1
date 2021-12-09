// 13.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout << "A^n" << endl << "enter number A and integer N: ";
	int a, n;
	cin >> a >> n;
	int t = -1, sum = 0;
	while (t < n) 
	{
		t = t + 1;
		sum = sum + pow(a, t);
	}
	cout << sum;
}