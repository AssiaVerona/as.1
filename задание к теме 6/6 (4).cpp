// 6 (4).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double x, y;
	cout << "Vvedite znachenye x" << endl;
	cin >> x;
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	cout << "y = " << y;
	return 0;



}
