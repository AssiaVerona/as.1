// 8 (5).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    int A, t1, t2;
    cout << " Please enter a three-digit number " << endl;
    cin >> A;
    if ((A > 99) and (A < 1000))
    {
        t1 = A / 100;
        t2 = A - (t1 * 100);
        cout << t2 << t1;
    }
    else
    {
        cout << " You have not met the conditions ";
    }
	return 0;
}