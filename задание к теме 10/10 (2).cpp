// 10 (2).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	int A, B, C;
	cout << " Enter numbers A, B, C " << endl;
	cin >> A >> B >> C;
	cout << " Inequalities are valid A < B < C " << endl;
	if ((A < B) and (B < C))
	{
		cout << " Right ";
	}
	else
	{
		cout << " false ";
	}

	return 0;
}