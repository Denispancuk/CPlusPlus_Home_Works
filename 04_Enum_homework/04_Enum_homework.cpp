#include <iostream>
using namespace std;

int main()
{
	// First task
	int i = 14;
	while (i <= 123)
	{
		cout << i << endl;
		i++;
	}
	cout << endl;
	// Second task
	i = -20;
	while (i <= 100)
	{
		if (i > 0 and i % 2 != 0)
		{
			cout << i << endl;
			i++;
		}
	}
	// Third task
	int counter = 0;
	int Num = 0;
	int N;
	cout << "Enter number numbers: ";
	cin >> N;
	while (N != 0)
	{
		cout << "Enter number: ";
		cin >> Num;
		if (Num < 0)
		{
			counter++;
		}
		N--;
	}
	cout << "Negative count numbers: " << N << endl;
	// Fourth task
	i = 8;
	int sum = 0;
	float dobutok = 0;
	while (i != 0)
	{
		cout << "Enter number: ";
		cin >> Num;
		if (i == 8)
		{
			dobutok += Num;
		}
		else {
			dobutok *= Num;
		}
		sum += Num;
		i--;
	}
	cout << "product: " << dobutok << endl;
	cout << "Sum: " << sum << endl;

}
