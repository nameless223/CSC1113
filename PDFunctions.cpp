#include <iostream>
#include <cmath> //fabs, sqrt, pow, ceil(rounding up), floor(rounding down)
#include <cstdlib>  //use abs, labs, srdand, rand

using namespace std;

int main()
{
	//showing ++ and --
	int x = 10;
	cout << x++ << endl;//outputs 10 but adds 1 to next line
	cout << x << endl;
	cout << ++x << endl;//outputs 10+1 in same line
	cout << x << endl;
	cout << x-- << endl;//outputs 10 but adds 1 to next line
	cout << x << endl;
	cout << --x << endl;//outputs 10+1 in same line
	cout << x << endl;

	cout << abs(-9) << endl;
	cout << labs(-99999999999999)<<endl;

	return 0;
}