#include <iostream>
#include <cmath>

using namespace std;

int choices(int x, int y);

int main()
{
	for (; ;)
	{
		srand(time(0));
		int x;
		cout << "Rock = 1\tPaper = 2\tScissors = 3" << endl;
		cin >> x;
		int y = (rand() % 3) + 1;
		choices(x, y);
	}


	return 0;
}

int choices(int x, int y)
{
	if (x < 4)
	{
		if (x == y)
		{
			cout << "It's a draw!" << endl;
			return(x, y);
		}
		if (x == 1)
		{

			cout << "You chose Rock..." << endl;
			if (y != 2)
			{
				cout << "You won!, The computer chose scissors" << endl;

			}
			else
			{
				cout << "You lose!, The computer chose Paper" << endl;

			}
			return(x, y);
		}
		if (x == 2)
		{
			cout << "You chose Paper..." << endl;
			if (y != 3)
			{
				cout << "You won!, the computer chose Rock" << endl;
			}
			else
			{
				cout << "You lose!, the computer chose Scissors" << endl;
			}
			return(x, y);
		}
		if (x == 3)
		{
			cout << "You chose Scissors..." << endl;
			if (y != 1)
			{
				cout << "You won!, the computer chose Paper" << endl;
			}
			else
			{
				cout << "You lose!, the computer chose Rock" << endl;
			}
			return(x, y);
		}

	}
	else
	{
		cout << "Please enter a number from 1-3" << endl;
	}
	
	
}