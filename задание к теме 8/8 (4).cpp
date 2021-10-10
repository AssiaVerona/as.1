// 8 (4).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main() 
{
    int A, t1, t2;
    cout << " Please enter a two-digit number " << endl;
    cin >> A;
    if ((A > 9) and (A < 100))
    {
        t1 = A / 10;
        t2 = A - (t1 * 10);
        cout << t2 << t1;
    }
    else
    {
        cout << " You have not met the conditions ";
    }
    return 0;
}