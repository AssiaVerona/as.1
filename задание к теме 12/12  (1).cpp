// 12  (1).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	int d, m, i;
	string massiv1[] = {"zero", "first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth", "eleventh", "twelfth", "thirteenth", "fourteenth", "fifteenth", "sixteenth", "seventeenth", "eighteenth", "nineteenth", "twentieth", "twenty - first", "twenty - second", "twenty - third", "twenty - fourth", "twenty - fifth", "twenty - sixth", "twenty - seventh", "twenty - eighth", "twenty - ninth", "thirtieth", "thirty - first" };
	string massiv2[] = { "zero", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	cout << " enter date: day and month " << endl;
	cin >> i >> m;
	if (((i == 30) and (m == 2)) or (i==0) or (m==0) or ((i==31) and (m==2)) or ((i==31) or (m==4) or(m==6) or (m==9) or (m==11)))
	{
		cout << " there is no such date " << endl;
	}
	else
	cout << massiv1[i] << endl << massiv2[m];
	


	return 0;
}
