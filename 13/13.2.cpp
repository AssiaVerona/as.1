// 13.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Introduce an integer N: ";
	cin >> n;
	int t = 0;
	double pr = 1, a = 1.0;
	while (t < n) 
	{
		t = t + 1;
		a = a + 0.1;
		pr = pr * a;
	}
	cout << pr;
}