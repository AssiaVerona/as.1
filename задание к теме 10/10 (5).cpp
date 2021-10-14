// 10 (5).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int A;
    cout << "enter a four-digit number" << endl;
    cin >> A;
    A = abs(A);
    if ((A % 10 == A / 1000) and (A % 100 / 10 == A % 1000 / 100))
    {
        cout << " true " << endl;
    }
    else
    {
        cout << "folse";
    }
    return 0;
}
