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
int linearSearch(int arr[], int size, int key) {
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			return i;
		}
	}
	return -1;
}
void selectedSort(int arr[], int size) {
	int temp, index;
	for (int i = 0; i < size; i++)
	{
		index = i;
		temp = arr[i];
		for (int j = i+1; j < size; j++)
		{
			if (arr[j] < temp)
			{
				temp = arr[j];
				index = j;
			}
		}
		if (index != i)
		{
			arr[index] = arr[i];
			arr[i] = temp;
		}
	}
}
void BubbleSort(int arr[], int size) {
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = size-1; j > i; j--)
		{
			if (arr[j-1 > arr[j]])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void ShakerSort(int arr[], int size) {
	int j, index = size - 1;
	int left = 1, right = size - 1;
	int temp;
	do
	{
		for (j = right; j >= left; j--)
		{
			if (arr[j - 1 ]> arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
			index = j;
		}
		
		left = index + 1;
		for (j = left; j <= right; j++)
		{
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
			index = j;
		}
		right = index - 1;
	} while (left < right);
}
int main()
{
	srand(time(0));
	const int size = 10;
	int array[size];
	int key, indexfind;
	Initarray(array, size);
	Showarray(array, size);
	cout << endl;
	ShakerSort(array, size);
	Showarray(array, size);
	cout << "Enter key: ";
	cin >> key;
	cout << endl;
	indexfind = linearSearch(array, size, key);
	if (indexfind == -1)
	{
		cout << "Not found: "<< key << endl;
	}
	else {
		cout << "Element: " << key << " found in index: "<< indexfind << endl;
	}

}
