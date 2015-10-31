#include <iostream>
#include <cmath>
#include <windows.h>
#include <stdint.h>

using namespace std;

int main()
{
    /*int upperLimit = 100000;
    int p = 2;
    int digits[upperLimit];
    for(int i = 0; i < upperLimit; i++) {
        digits[i] = i;
    }

    while(p < upperLimit) {
    for(int i = 1; i*p < upperLimit; i++) {
        if( i == 1 && digits[i*p] != -1) {
            cout << i*p << endl;
        }
        digits[p*i] = -1;
    }
    p+=1;
    }
    */

    Beep(261.63, 500);
    Beep(523.25, 500);
    Beep(261.63, 500);
    Beep(523.25, 500);
    return 0;



}
