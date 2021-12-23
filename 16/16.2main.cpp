/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout <<"Введите кол-во элементов массива: ";
    int n,a,d;
    cin >>n;
    cout <<"Введите первый член геометрической последовательности: ";
    cin >>a;
    cout <<"Введите знаменатeль геометрической прогресси: ";
    cin >>d;
    int m[n], t=-1;
    while (t < n-1){
        t=t+1;
        m[t] = a * pow(d,t);
    }
    t=-1;
    while (t < n-1){
        t=t+1;
        cout <<m[t]<<"\t";
    }
}