#include <iostream>
#include <windows.h>
# include <cmath>

using namespace std;

int c = 0;
    int csh = 1;
    int d = 2;
    int dsh = 3;
    int e = 4;
    int f = 5;
    int fsh = 6;
    int g = 7;
    int gsh = 8;
    int a = 9;
    int ash = 10;
    int b = 11;


void happy(float notes[]) {
    for(int i = 0; i < 2; i++) {
    Beep(notes[e], 250);
    Beep(notes[e], 250);
    Beep(notes[fsh], 500);
    Beep(notes[e], 500);
    Beep(notes[a], 500);
    Beep(notes[gsh], 500);
    Sleep(500);
    Beep(notes[e], 250);
    Beep(notes[e], 250);
    Beep(notes[fsh], 500);
    Beep(notes[e], 500);
    Beep(notes[b], 500);
    Beep(notes[a], 500);
    Sleep(500);
    Beep(notes[e], 250);
    Beep(notes[e], 250);
    Beep(2*notes[e], 500);
    Beep(2*notes[csh], 500);
    Beep(notes[a], 500);
    Beep(notes[gsh], 500);
    Beep(notes[fsh], 500);

    Beep(2*notes[d], 250);
    Beep(2*notes[d], 250);
    Beep(2*notes[csh], 500);
    Beep(notes[a], 500);
    Beep(notes[b], 500);
    Beep(notes[a], 500);
    Sleep(500);
    }
}




int main()
{
    float notes[] = {523.23,554.37,587.33,622.25,659.25,698.46,739.99,783.99,830.61,880,932.33,987.77,1046.5};

    Beep(2*notes[fsh], 1000);  //1
    Beep(2*notes[e], 1000);

    Beep(2*notes[d], 1000);   //2
    Beep(2*notes[csh], 1000);

    Beep(notes[b], 1000);   //3
    Beep(notes[a], 1000);

    Beep(notes[b], 1000);   //4
    Beep(2*notes[csh], 1000);

    Beep(2*notes[d], 1000);   //5
    Beep(2*notes[csh], 1000);

    Beep(notes[b], 1000);   //6
    Beep(notes[a], 1000);

    Beep(notes[g], 1000);    //7
    Beep(notes[fsh], 1000);

    Beep(notes[g], 1000);     //8
    Beep(notes[e], 1000);

    Beep(2*notes[a], 250);  //33
    Beep(2*notes[fsh], 125);
    Beep(2*notes[g], 125);
    Beep(2*notes[a], 250);
    Beep(2*notes[fsh], 125);
    Beep(2*notes[g], 125);
    Beep(2*notes[a], 125);
    Beep(notes[a], 125);
    Beep(notes[b], 125);
    Beep(2*notes[csh], 125);
    Beep(2*notes[d], 125);
    Beep(2*notes[e], 125);
    Beep(2*notes[fsh], 125);
    Beep(2*notes[g], 125);
    Beep(2*notes[fsh], 250);
    Beep(2*notes[d], 125);
    Beep(2*notes[e], 125);
    Beep(2*notes[fsh], 250);
    Beep(notes[fsh], 125);
    Beep(notes[g], 125);
    Beep(notes[a], 125);
    Beep(notes[b], 125);
    Beep(notes[a], 125);
    Beep(notes[g], 125);
    Beep(notes[a], 125);
    Beep(notes[fsh], 125);
    Beep(notes[g], 125);
    Beep(notes[a], 125);
    Beep(notes[g], 250);
    Beep(notes[b], 125);
    Beep(notes[a], 125);
    Beep(notes[g], 250);
    Beep(notes[fsh], 125);
    Beep(notes[e], 125);
    Beep(notes[fsh], 125);
    Beep(notes[e], 125);
    Beep(notes[d], 125);
    Beep(notes[e], 125);
    Beep(notes[fsh], 125);
    Beep(notes[g], 125);
    Beep(notes[a], 125);
    Beep(notes[b], 125);

    Beep(notes[g], 250);    //36
    Beep(notes[b], 125);
    Beep(notes[a], 125);
    Beep(notes[b], 250);
    Beep(2*notes[csh], 125);
    Beep(2*notes[d], 125);
    Beep(notes[a], 125);
    Beep(notes[b], 125);
    Beep(2*notes[csh], 125);
    Beep(2*notes[d], 125);
    Beep(2*notes[e], 125);
    Beep(2*notes[fsh], 125);
    Beep(2*notes[g], 125);
    Beep(2*notes[a], 125);

    Beep(2*notes[fsh], 250);  //37
    Beep(2*notes[d], 125);
    Beep(2*notes[e], 125);
    Beep(2*notes[fsh], 250);
    Beep(2*notes[e], 125);
    Beep(2*notes[d], 125);
    Beep(2*notes[e], 125);
    Beep(2*notes[csh], 125);
    Beep(2*notes[d], 125);
    Beep(2*notes[e], 125);
    Beep(2*notes[fsh], 125);
    Beep(2*notes[e], 125);
    Beep(2*notes[d], 125);
    Beep(2*notes[csh], 125);

    Beep(2*notes[d], 250);    //38
    Beep(notes[b], 125);
    Beep(2*notes[csh], 125);
    Beep(2*notes[d], 250);
    Beep(notes[d], 125);
    Beep(notes[e], 125);
    Beep(notes[fsh], 125);
    Beep(notes[g], 125);
    Beep(notes[fsh], 125);
    Beep(notes[e], 125);
    Beep(notes[fsh], 125);
    Beep(2*notes[d], 125);
    Beep(2*notes[csh], 125);
    Beep(2*notes[d], 125);

    Beep(notes[b], 250);     //39
    Beep(2*notes[d], 125);
    Beep(2*notes[csh], 125);
    Beep(notes[b], 250);
    Beep(notes[a], 125);
    Beep(notes[g], 125);
    Beep(notes[a], 125);
    Beep(notes[a], 125);
    Beep(notes[fsh], 125);
    Beep(notes[g], 125);
    Beep(notes[a], 125);
    Beep(notes[b], 125);
    Beep(2*notes[csh], 125);
    Beep(2*notes[d], 125);

    Beep(notes[b], 250);  //40
    Beep(2*notes[d], 125);
    Beep(2*notes[csh], 125);
    Beep(2*notes[d], 250);
    Beep(2*notes[csh], 125);
    Beep(notes[b], 125);
    Beep(2*notes[csh], 125);
    Beep(2*notes[d], 125);
    Beep(2*notes[e], 125);
    Beep(2*notes[d], 125);
    Beep(2*notes[csh], 125);
    Beep(2*notes[d], 125);
    Beep(notes[b], 125);
    Beep(2*notes[csh], 125);

    Beep(2*notes[d], 500);    //41



    happy(notes);

    //return 0;
}
