#include <iostream>
using namespace std;
int main()
{

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i << "*" << j << "=" << i * j << endl;
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	int starlines = 1;
	int countstar;
	int lenght = 10;
	while (starlines < lenght)
	{
		countstar = 1;
		starlines++;
		while (countstar < lenght)
		{
			cout << "* ";
			countstar++;

		}
		cout << endl;
	}
	
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			if (i >= j and i+j >= 10)
			{
				cout << "|###|";
			}
			else
			{
				cout << "     ";
			}
			
			
		}
		cout << endl;
	}
}
