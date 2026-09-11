#include <iostream>
using namespace std;
int main()
{
	srand(time(0));
    // First task
	int array1[3][4];
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			array1[i][j] = rand() % 3;
			if (array1[i][j] == 0) {
				count++;
			}

		}
	}
	cout << "Count numbers zero: " << count << endl;
	// Second task
	const int n = 15;
	int array2[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			array2[i][j] = rand() % 200;
			if (array2[i][j] == 0) {
				count++;
			}

		}
	}
}
