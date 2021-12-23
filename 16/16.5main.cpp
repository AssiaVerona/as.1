/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout <<"Введите кол-во элементов: ";
    int n;
    cin >>n;
    cout <<"Заполните массив: ";
    int m[n], t=-1;
    while (t < n-1){
        t=t+1;
        cin >>m[t];
    }
    
    for (int i=0; i!=2; i++){
        t=-1;
        while (t < n-1){
            t=t+1;
            if (t%2 == i){
                cout <<m[t]<<"\t";
            }
        }
        cout <<endl;
    }
}