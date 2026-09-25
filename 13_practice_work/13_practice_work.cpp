#include <iostream>
using namespace std;
int* CreateArr(int size) {
    int* arr = new int[size];
    return arr;
}
void InitArray(int* arr, int size) {
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
}
void ShowArray(int* arr, int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int* deleteEL(int* arr, int* size) {
    int* temp = new int [*size - 1];
    size--;
    for (int i = 0; i < *size; i++)
    {
        temp[i] = arr[i];
    }
    delete[] arr;
    arr = temp;
    return arr;
    
}
int main()
{
    //First Task
    int* NewInt = new int(15);
    float* NewFloat = new float(26.9);
    double* NewDouble = new double(121);
    cout << "Product: " << *NewInt * *NewFloat * *NewDouble << endl;
    delete NewDouble, NewInt, NewFloat;
    //Second Task
    int size;
    int* SizeAdress = &size;
    cout << "Enter a size: ";
    cin >> size;
    int* arr = CreateArr(size);
    InitArray(arr, size);
    ShowArray(arr, size);
    deleteEL(arr, SizeAdress);
    ShowArray(arr, size);
}
