// 6 (3).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double A, B, C;
	cout << "VVedite znachenya A, B, C" << endl;
	cin >> A >> B >> C;
	swap(A, C);
	swap(B, A);
	cout << "A = " << A << endl << "B = " << B << endl << "C = " << C;
	return 0;

}

