#include <iostream>
#include <cmath> //fabs, sqrt, pow, ceil(rounding up), floor(rounding down)
#include <cstdlib>  //use abs, labs, srdand, rand

using namespace std;

int main()
{
	//showing ++ and --
	
	//int x = 10;
	//cout << x++ << endl;//outputs 10 but adds 1 to next line
	//cout << x << endl;
	//cout << ++x << endl;//outputs 10+1 in same line
	//cout << x << endl;
	//cout << x-- << endl;//outputs 10 but adds 1 to next line
	//cout << x << endl;
	//cout << --x << endl;//outputs 10+1 in same line
	//cout << x << endl;

	//cout << abs(-9) << endl;
	//cout << labs(-99999999999999)<<endl;
	//cout << fabs(-9.123456) << endl;

	//cout << endl;
	//cout << sqrt(9.0) << endl;
	//cout << pow(9.0, 2.0) << endl;

	//cout << endl;
	//cout << ceil(9.65) << endl;
	//cout << ceil(-9.65) << endl;

	//cout << floor(9.65) << endl;
	//cout << floor(-9.65) << endl;


	//float x1 = (sqrt(abs(-4) + 2) / 3);
	//float x2 = (pow((abs(-4) + 2),0.5) / 3);
	//cout << x1 << endl;
	//cout << endl;
	//cout << x2;

	//srand(10);//ran num gen
	srand(rand() % rand()); //makes alg for rand num harder to figure out
	cout << RAND_MAX << endl;
	cout << endl;
	
	int c = 0;
	while (c <= 25)
	{
		//cout << rand() % 6 << endl;//picks rand num from 0 - 5
		cout << (rand() % 6) + 1 << endl;//picks rand num from 1 - 6
		c++;
	}




	return 0;
}