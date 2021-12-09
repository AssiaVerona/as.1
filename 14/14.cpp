// 14.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int number = -1;
    while (number != 0) 
    {
        cout << "Введите номер задания (0 - остановить): " << endl;
        cin >> number;
        if (number == 1) 
        {
            cout << "Вывод \nВведите целые положителье числа A и B: "<< endl;
            int a, b;
            cin >> a >> b;
            int t = 0;
            a = a - 1;
            while (a < b) 
            {
                a = a + 1;
                t = 0;
                while (t < a) 
                {
                    t = t + 1;
                    cout << a;
                }
                cout << endl;
            }
            cout << "\n\n\n";
        }
        else if (number == 2) 
        {
            cout << "Найти длину незанятой части\nВведите положительные числа A и B (A>B): " << endl;
            int a, b;
            cin >> a >> b;
            while (a >= b) 
            {
                a = a - b;
            }
            cout << a << "\n\n\n";
        }
        else if (number == 3) 
        {
            cout << "1+2+...+K\nВведите целое число N: " << endl;
            int n;
            cin >> n;
            int sum = 0, t = 0;
            while (sum < n) 
            {
                t = t + 1;
                sum = sum + t;
            }
            cout << t << "\n\n\n";
        }
        else if (number == 4) 
        {
            double money = 1000, percent;
            cout << "Вклад в банке\nВведите процент от 0 до 25: " << endl;
            cin >> percent;
            int t = 0;
            while (money <= 1100) 
            {
                t = t + 1;
                money = money + ((money / 100) * percent);
            }
            cout << "Деньги в банке превысят 1100 через " << t << " месяцев" << endl
                << "Будет " << money << "\n\n\n";
        }
        else if (number == 5) 
        {
            cout << "Найти НОД" << endl << "Введите целые положительные числа A и B: " << endl;
            int a, b;
            cin >> a >> b;
            if (a < b) 
            {
                swap(a, b);
            }
            while (a % b != 0) 
            {
                int t = a % b;
                a = b;
                b = t;
            }
            cout << "НОД будет " << b << "\n\n\n";
        }
        else if (number == 6) 
        {
            cout << "Найти номер числа Фибоначчи" << endl << "Введите целое число N: " << endl;
            int n;
            cin >> n;
            int a = 0, b = 1, sum = 0, t = 0;
            while (sum != n) 
            {
                t = t + 1;
                sum = a + b;
                a = b;
                b = sum;
            }
            cout << t << "\n\n\n";
        }
    }
}