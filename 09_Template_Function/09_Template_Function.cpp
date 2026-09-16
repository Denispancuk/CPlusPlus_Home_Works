#include <iostream>
using namespace std;
template<typename T_arr>
T_arr MaxElement(T_arr arr[], int size) {
	T_arr max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
int main()
{
	const int size = 7;
	int arr[size] = { 1,2,3,4,5,6,7 };
	float arr1[size] = { 0.1,0.2,0.3,0.4,0.5,0.6,0.7 };
	double arr2[size] = { 0.123,0.243,0.453,0.654,0.765,0.345,0.741 };
	cout << MaxElement(arr, size) << endl;
	cout << MaxElement(arr1, size) << endl;
	cout << MaxElement(arr2, size) << endl;

}
