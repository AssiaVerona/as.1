// 6 (5).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double x, y;
	cout << "Vvedite znachenye x" << endl;
	cin >> x;
	y = 4 * pow((x-3), 6) - 7 * pow((x-3), 3) + 2;
	cout << "y = " << y;
	return 0;



}