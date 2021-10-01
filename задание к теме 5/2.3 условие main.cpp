/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double A, B, C, AC, BC, u;
    cout << "Vvedite A, B, C" << endl;
    cin >> A >> B >> C;
    if ((A<C and C<B) or (A>C and C>B)) {
        AC = abs(A-C);
        BC = abs(B-C);
        u = AC*BC;
        cout << "Dlyna AC = "<< AC<< endl << "Dlyna BC = " << BC << endl;
        cout << "Proizvedenye otrezkov = "<< u;   
        
        }
    
  
    else
        {
        // операция не выполняется
        cout << "vy narushyly uslovya";
        }
    
    
    
    return 0;
}
