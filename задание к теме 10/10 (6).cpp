// 10 (6).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "enter a, b, c " << endl;
    cin >> a >> b >> c;
    
    if (a * a == b * b + c * c)
    {
        cout << "Triangle rectangular" << endl;
    }

    else
    {
        if (b * b == a * a + c * c)
        {
            cout << "Triangle rectangular" << endl;
        }
        else
        {
            if (b * b == a * a + c * c)
            {
                cout << "Triangle rectangular" << endl;
            }
            else
            {
                if (c * c == a * a + b * b)
                {
                    cout << "Triangle rectangular" << endl;
                }
                else
                {
                    cout << "The triangle is not rectangular" << endl;
                }
            }
            
        }
    }
        
    return 0;
}