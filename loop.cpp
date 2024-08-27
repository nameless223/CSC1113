#include <iostream>
using namespace std;

int main()
{
	int nitems, count, calitem, totalcal;
	cout << "How many items did you eat today?";
	cin >> nitems;
	totalcal = 0;
	cout << "Enter the number of calories in each of the\n"
		<< nitems << " items eaten: ( Press enter after each)";
	count = 1;
	while(count <= nitems) //for (count = 1; count <= nitems; count++)
	{
		cin >> calitem;
		totalcal += calitem;
		count++;
	}

	cout << "Total calories eaten today is " << totalcal << endl;

	return 0;
}