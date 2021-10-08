// 7  (5).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double A, x, B;
	cout << "VVedite znachenya A and B, tak, cto A ne ravno 0" << endl;
	cin >> A >> B;
	if (A == 0)
	{
		cout << "Vy  Ne sobluly yslovye" << endl;
	}
	else
	{
		x = -B / A;
		cout << "x = " << x;
	}
	return 0;
}
