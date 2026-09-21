#include <iostream>
using namespace std;
int Stypin(int number, int step) {
	if (step == 1) {
		return number;
	}
	step--;
	return number * Stypin(number, step);
}
int Stars(int N) {
	if (N <= 0) {
		return '*';
	}
	cout << '*';
	N--;
	Stars(N);
}
int Summ(int a, int b) {
	if (a > b)
	{
		if (a == b)
		{
			return b;
		}
		return b + Summ(a, b+1);
	}
	else
	{
		if (a == b)
		{
			return a;
		}
		return a + Summ(a+1, b);
	}
}
int main()
{
	/*First task*/
	int number, step;
	cout << "Enter number: ";
	cin >> number;
	cout << "Enter step: ";
	cin >> step;
	cout << "Product number: " << Stypin(number, step) << endl;
	//Second task
	int N;
	cout << "Enter number stars: ";
	cin >> N;
	Stars(N);
	cout << endl;
	/*Third task*/
	int a = 5, b = 1;
	cout << "Enter first number diapazone: ";
	cin >> a;
	cout << "Enter second number diapazone: ";
	cin >> b;
	cout << "Sum all numbers diapazone: " << Summ(a, b) << endl;
}
