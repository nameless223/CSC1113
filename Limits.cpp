#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;


int main()
{
    long double c, xr, xl, yr, yl, e;
    cout << "What is your x approaching for this limit ?";
    cin >> c;
    
    for (long double x = 1; x <= 6; x++)
    {
        xr = c + (pow(10, -x));//c+.1, c+.01, c+.001.....etc
        yr = (xr + 3) / (pow(xr, 2) - 9);//(X+3)/(X^2-9)
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(9);//allows me to round to 9 decimal places
        cout << "(" << xr << "," << yr << ")" << endl;

    }
    cout << endl;
    for (long double x = 1; x <= 6; x++)
    {
        xl = c - (pow(10, -x));
        yl = (xl + 3) / (pow(xl, 2) - 9);
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(9);
        cout << "(" << xl << "," << yl << ")" << endl;

    }
    
    e = abs(yl - yr);
    if (e <= (pow(10, -4)))
    {
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(3); //rounds to 3 decimal places
        cout << "The limit is " << yr << endl;

    }
    else
    {
        cout << "limit does not exist" << endl;
    }





    return 0;

}

