// 7.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	double g, r;
	cout << "VVedite znachenye radiana, chto 0<r<2Pi" << endl;
	cin >> r;
	if ((r < 0) or (r > 6.283185)) {
		cout << "znachenye radyana ne sootvetstvuet promejutku 0<r<2Pi" << endl;


	}
	else {
		g = (r * 180) / 3.14;
		cout << "Znachenye etogo ugla v gradusah  = " << endl << g;

	}





	return 0;
}
