// 8 (1).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>

using namespace std;

int main()
{
	int b, k;
	cout << "VVedite kolychestvo bayt" << endl;
	cin >> b;
	k = (b / 1024);
	if (b % 1024 == 0)
	{
		cout << "kolyzestvo kbayt = " << k;
	}
	else if (b%1024 !=0)
	{
		cout << "kolyzestvo kbayt = " << k + 1;
	}
	
	return 0;
}
