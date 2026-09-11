#include <iostream>
using namespace std;
//10.Дано масив розміром 5?4 з елементами дійсного типу(позитивні та від’ємні).
//Визначити суму всіх від’ємних елементів.
int main()
{
	srand(time(0));
    //First task
    int array1[4][3];
	int count = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			
			array1[i][j] = rand() % 3;
			if (array1[i][j] != 0) {
				count++;
			}
		}
	}
	cout << "Count numbers not zero: " << count << endl;
	//Second task
	int array2[3][3];
	count = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			array2[i][j] = rand() % 3;
			if (array2[i][j] == 0) {
				count++;
			}
			
		}
	}
	cout << "Count numbers zero: " << count << endl;
	//Third task
	int array3[7][3];
	count = 0;
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			array3[i][j] = (-20 + rand() % 40);
				if (array3[i][j] >= -11 and array3[i][j] <= 11) {
					count++;
				}
			
		}
	}
	cout << "count the number of integers whose absolute value is less than 12: " << count << endl;
	//Fourth task
	int array4[4][5];
	count = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			array4[i][j] = (-20 + rand() % 40);
			if (array4[i][j] > 0){
				count++;
			}
			
		}
	}
	cout << "Count positive numbers: " << count << endl;
	//Fiveth task
	long long dobutok = 1;
	int array5[5][4];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			array5[i][j] = (-20 + rand() % 40);
			if (array5[i][j] > 0) {
				dobutok *= array5[i][j];
			}
		}
	}
	cout << "The product positive numbers: " << dobutok << endl;
	//Sixth task
	dobutok = 1;
	int array6[5][4];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			array6[i][j] = (-20 + rand() % 40);
			if (array6[i][j] < 0) {
				dobutok *= array6[i][j];
			}
		}
	}
	cout << "The product negative numbers: " << dobutok << endl;
	//Seventh task
	int array7[4][4];
	count = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			array7[i][j] = rand() % 40;
			if (array7[i][j] % 6 == 1) {
				count++;
			}
		}
	}
	cout << "Numbers that leave a remainder of 1 when divided by 6: " << count << endl;
	//Eighth task
	int min = 40;
	int array8[5][6];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			array8[i][j] = rand() % 40;
			if (array8[i][j] < min) {
				min = array8[i][j];
			}
		}
	}
	cout << "Min all elements: " << min << endl;
	//Nineth task
	int array9[5][6];
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			array9[i][j] = rand() % 40;
			if (array9[i][j] > max) {
				max = array9[i][j];
			}
		}
	}
	cout << "Max all elements: " << max << endl;
	//tenth task
	int sum = 0;
	int array10[5][4];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			array10[i][j] = (-100 + rand() % 200);
			if (array10[i][j] < 0) {
				sum += array10[i][j];
			}
		}
	}
	cout << "Sum all negative elements: " << sum << endl;
}
