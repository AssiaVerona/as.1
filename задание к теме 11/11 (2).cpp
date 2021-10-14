// 11 (2).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double a, b, c;
	cout << " enter three numbers " << endl;
	cin >> a >> b >> c;
	if ((b <= c) and (b <= a)) 
	{
		cout << " the sum of the two largest = " << a + c;
	}
	else 
	{
		if ((a <= c) and (a <= b)) 
		{
			cout << " the sum of the two largest = " << b + c;
		}
		else 
		{
			cout << " the sum of the two largest = " << b + a;
		}
	}

}