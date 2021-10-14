// 10 (1).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	int A, B;
	cout << " Enter numbers A and B " << endl;
	cin >> A >> B;
	cout << " Inequalities are valid A > 2 and B <= 3 "<< endl;
	if ((A > 2) and (B <= 3))
	{
		cout << " Right ";
	}
	else
	{
		cout << " false ";
	}

	return 0;
}