#include <iostream>
#include <cmath> //static cast converts one datatype to another
#include <stdio.h>

using namespace std;
//Func proto
const double tax = 0.07; //global constant
double totcos(int num, double price);
void totcos1(int num, double price);
int main()
{
	const double price = 1.50;
	int number;
	cout << " $ales Tax : " << tax << endl;
	cout << "Enter the number of tacos purchased...";
	cin >> number;
	double total = totcos(number, price);
	cout << "You owe : " << total << endl;

	cout << "Bill rounded up: " << static_cast<int>(ceil(total)) << endl;

	totcos1(number, price);
	return 0;
}

double totcos(int num, double price)
{
	double total = (1 + tax) * (num * price);
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	

	return total;
}
void totcos1(int num, double price)
{
	double total = (1 + tax) * (num * price);
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "You owe : " << total << endl;

	//return total;
}