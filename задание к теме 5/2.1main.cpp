/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
   
    double x1, y1, x2, y2;
    cout << "vvedite dannye koordinate x1 y1 x1 y2" << endl;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "Rasstoyanye ravno = " << sqrt (pow(x1-x2,2) + pow (y1-y2,2));

    return 0;
}
