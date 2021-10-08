// 7  (4).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double V1, V2, S, t, S2;
	cout << "VVedyte skorosty V1 y V2 avtomobyle u rasstoyanye mejdu nymy S" << endl;
	cin >> V1 >> V2 >> S;
	cout << "Vvedyte kolychestvo chasov t" << endl;
	cin >> t;
	if ((V1 < 0) or (V2 < 0) or (S < 0))
	{
		cout << "Skorost yly rasstoyanye yly time ne mojet byt otricatelnymy" << endl;
	}
	else
	{
		S2 = S + V1 * t + V2 * t;
		cout << S2;
	}




	return 0;
}
