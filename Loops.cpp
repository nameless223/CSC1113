#include <iostream>
using namespace std;

int main()
{
	float x, y, sumnum;
	cout << "Type in a number" << endl;
	cin >> x;
	cout << "Type in another number..." << endl;
	cin >> y;


	if (x >= y)
	{
		cout << x << "is greater than or equal to " << y << endl;
		sumnum = 5;
		cout << sumnum << endl;
		if (x > (y + sumnum))
		{
			cout << x << "is greater than or equal to " << y+sumnum << endl;
		}
		else
		{
			cout << x << "is less than or equal to " << y + sumnum << endl;
		}
	}
	else if (x < y)
	{
		cout << x << "is less than" << y << endl;
	}
	else
	{
		cout << x << "equal to " << y << endl;
	}


	return 0;
}