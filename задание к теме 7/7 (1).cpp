// 7.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	double g, r;
	cout << "VVedite znachenye gradusa, chto 0<a<180"<< endl;
	cin >> g;
	if ((g < 0) or (g > 180)) {
		cout << "znachenye gradusa ne sootvetstvuet promejutku 0<a<180" << endl;


	}
	else {
		r = (g*3.14)/180;
		cout << "Znachenye etogo ugla v radyanah  = "<< endl << r;

	}





	return 0;
}
