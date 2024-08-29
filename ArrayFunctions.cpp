#include <stdio.h>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

void nameFill(string a[], int size);
void gradeFill(string a[],int b[], int size);
void output(string a[],int b[], int size);

int main()
{
	string n[5];
	int g[5];
	nameFill(n, 5);
	gradeFill(n, g, 5);
	output(n, g, 5);

	return 0;
}

void nameFill(string a[], int size)
{
	cout << "Enter " << size << "Names: \n";
	for (int i = 0; i < size; i++)
	{
		cin >> a[i];
	}
}
void gradeFill(string a[], int b[], int size)
{
	cout << "Enter the grades for the following students: \n";
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the grade for " << a[i] << ": ";
		cin >> a[i];
	}
}
void output(string a[], int b[], int size)
{
	cout << "Student: \t avg: \n";
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << "\t \t";
		cout << b[i] << endl;
	}
}