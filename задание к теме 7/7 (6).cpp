// 7 (6).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double A1, B1, C1, A2, B2, C2, x, y, T, t1, t2;
	cout << "VVedite A1 B1 C1 A2 B2 C2" << endl;
	cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;
	//Правило Крамера
	T = A1 * B2 - A2 * B1;
	t1 = C1 * B2 - C2 * B1;
	t2 = A1 * C2 - A2 * C1;
	x = t1 / T;
	y = t2 / T;
	cout << "x = " << x << endl << "y = " << y;

}




//A1·x + B1·y = C1, 
//A2·x + B2·y = C2,
