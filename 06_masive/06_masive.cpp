#include <iostream>
using namespace std;
int main()
{
    /*int train[3];
    train[0] = 1;
    train[1] = 7;
    train[2] = 92;
    const int size = 12;
    int marks[size];
    marks[0] = 1;
    marks[1] = 12;
    marks[2] = 1231;
    marks[3] = 1231;
    marks[4] = 431;
    marks[5] = 561;
    marks[6] = 6751;
    marks[7] = 4561;
    marks[8] = 4631;
    marks[9] = 3451;
    marks[10] = 2341;
    marks[11] = 421;*/
    const int size = 10;
    for (int i = 0; i < size; i++)
    {
        int arr1[size] = { 1,2,3 };
        cout << arr1[i];
    }
    int arr2[size];
    for (int i = 0; i < size; i++)
    {
        int num = 2;
        cin >> num;
        arr2[i] = num;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr2[i];
    }
    
    

}
