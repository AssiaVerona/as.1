/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double x1, x2, y1, y2, S, P;
    cout << "Vvedite x1, x2, y1, y2" << endl;
    cin >> x1 >> x2 >> y1 >> y2;
    cout << "S = " << abs(x1-x2)*abs(y1-y2) << endl;
    cout << "P = " << 2*(abs(x1-x2)+abs(y1-y2));
    return 0;
}
