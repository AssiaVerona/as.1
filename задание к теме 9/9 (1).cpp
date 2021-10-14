// 9 (1).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int sec, sec2;
		cout << " enter the number of seconds " << endl;
		cin >> sec;
		sec2 = sec % 60;
		cout << " number of seconds = " << sec2;
        



	return 0;
}