/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
double a, b, c, x1, y1, x2, y2, x3, y3, B, C, AB, AC;
cout<<"enter two coordinates of point A ";
cin>> x1>> y1;
cout<< "enter two coordinates of point B ";
cin>> x2>> y2;
cout<< "enter two coordinates of point C ";
cin>> x3>> y3;
AB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
AC = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
if ( AB < AC )
{
   cout<< "point = "<< "B"<< endl;
   cout<< "length = "<< AB;
}
else if (AC < AB)
{
   cout<< "point = "<< "C"<< endl;
   cout<< "length = "<< AC;
}   
else if (AC == AB)
{
cout<<"The distances from point A to other points are the same and the length = "<<AB;
}
}