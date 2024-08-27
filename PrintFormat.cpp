#include <iostream>
using namespace std;

int main()
{
	float c1 = 0, c2 = 0, c3 = 0;
	while (c1 < 5)
	{
		c1 += 1; //c1=c1+1 or c1++;
		cout << c1 << "\t";
		
	}
	cout << endl;
	do 
	{
		c2++;
		cout << c2 << "\t";
	} while (c2 < 5);
	cout << endl;
	for (float c3 = 0; c3 < 5;)//c3++ 
	{
		c3++;
		cout << c3 << "\t";
	}




	return 0;
}