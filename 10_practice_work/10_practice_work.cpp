#include <iostream>
using namespace std;
void Initarray(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;

	}
}
void Showarray(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";

	}
}
void sortByAsc(int arr[], int size) {
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void sortByDesc(int arr[], int size) {
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (arr[j - 1] < arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void MainSort(int arr[], int size, int parameter = 1) {
	if (parameter == 0)
	{
		sortByAsc(arr, size);
	}
	else if (parameter == 1)
	{
		sortByDesc(arr, size);
	}
	else {
		sortByDesc(arr, size);
	}
}
int main()
{
	//First task
	srand(time(0));
	const int size = 10;
	int array[size];
	int parameter ;
	Initarray(array, size);
	cout << "Enter number parameter:\n0 - By ASC\n1 - By Desc\nYou answer: ";
	cin >> parameter;
	cout << "Original list: ";
	Showarray(array, size);
	cout << endl;
	MainSort(array, size, parameter);
	cout << "Sorted list: ";
	Showarray(array, size);

}
