// 7 (3).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main() {

	double X, A, Y, B, k1;
	cout << "VVedyte kolychestvo kg y summu kotoraya potrachena" << endl;
	cin >> X >> A;
	if ((A < 0) or (X<0))
	{
		cout << "Summa yly ves ne mojet byt otricatelnoy" << endl;
	}
	else
	{
		k1 = A / X;
		cout << "VVVedyte kolychestvo kg, chtoby uznat skolko ony budut stoyt" << endl;
		cin >> Y;
		B = k1 * Y;
		cout << "Cena za 1kg = " << k1 << endl << "Cena za vvedenoe kolychestvo kg = " << B;
	}
	
	return 0;
}

