#include <iostream>
using namespace std;
int Summa(int arr[], int size, int index) {
    if (index = size-1)
    {
        return(arr[index]);
    }
    return arr[index] + Summa(arr, size, index + 1);
}
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
void QuickSort(int arr[], int  size, int B, int E) {
    int i = B, j = E;
    int temp, p;
    p = arr[(B + E) / 2];
    do
    {
        while (arr[i] < p)i++;
        while (arr[j] > p)j--;
        if (i <= j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    } while (i < j);
    if (B < j)QuickSort(arr, size, B, j);
    if (i < E)QuickSort(arr, size, i, E);
}
int BinarySearch(int arr[], int size, int key) {
    int B = 0, E = size - 1;
    while (true)
    {


        int p = (B + E) / 2;
        if (key > arr[p])
        {
            B = p + 1;
        }
        else if (key < arr[p])
        {
            E = p - 1;
        }
        else if (key == arr[p]) {
            return p;
        }
        else {
            return -1;
        }
    }
}
int main()
{
    const int size = 200;
    int array1[size];
    Initarray(array1, size);
    Showarray(array1, size);
    cout << endl;
    cout << endl;
    QuickSort(array1, size, 0, size - 1);
    Showarray(array1, size);
    cout << endl;
    cout << BinarySearch(array1,size,81) << endl;
}
