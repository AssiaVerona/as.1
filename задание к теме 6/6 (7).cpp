// 6 (8).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double A, n, k;
	cout << "Vvedite znachenye A" << endl;
	cin >> A;
	n = pow(A, 3) * pow(A, 3) * pow(A, 3);
	k = n * pow(A, 3) * pow(A, 3);
	cout << "otvet raven = " << k;



}

