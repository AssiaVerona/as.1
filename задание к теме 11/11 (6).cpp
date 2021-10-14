// 11 (6).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<iostream>

using namespace std;

int main()
{
	int a;

	cout << "enter the number A in the range 1 to 999" << endl;
	cin >> a;

	if (a % 2 == 0);
	else cout << "ne";
	cout << "chetnoe ";
	if (a / 100 > 0 and a / 100 < 10) cout << "three-digit";
	else if (a / 10 > 0 and a / 10 < 10) cout << "two-digit";
	else if (a / 10 == 0) cout << "unequivocal";
	cout << "number";

}
