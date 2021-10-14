// 11 (5).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int R;
	cout << "Please enter an integer" << endl;
	cin >> R;
	if ((R > 0) and (R % 2) == 0)
	{
		cout << "even positive number";
	}
	else if ((R > 0) and (R % 2) != 0)
	{
		cout << "odd positive number";
	}
	else if (R == 0)
	{
		cout << "zero number";
	}
	else if ((R < 0) and (R % 2) == 0)
	{
		cout << "negative even number";
	}
	else if ((R < 0) and (R % 2) != 0)
	{
		cout << "negative odd number";
	}
}


