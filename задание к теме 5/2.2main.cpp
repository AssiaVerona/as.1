/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double A, B, C, AC, BC, sum;
    cout << "Vvedite A, B, C" << endl;
    cin >> A >> B >> C;
    AC = abs(A-C);
    BC = abs(B-C);
    sum = AC+BC;
    cout << "Dlyna AC = "<< AC<< endl << "Dlyna BC = " << BC << endl;
    cout << "Summa dlyn otrezkov = "<< sum;

    return 0;
}
