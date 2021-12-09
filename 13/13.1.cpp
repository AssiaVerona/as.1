// 13.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	
	double  n, t=0;
	cout << "enter the price of one kg of sweets "<< endl;
	cin >> n;
	while (t < 10) 
	{
		t = t + 1;
		cout << (float)((n / 10) * t) << endl;
	}
}