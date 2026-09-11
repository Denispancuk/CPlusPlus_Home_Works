#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    srand(time(0));
    int a;
    a = rand() % 100;
    cout << a << endl;
    a = rand() % 100;
    cout << a << endl;
    a = rand() % 100;
    cout << a << endl;
    // 0 ... x rand()%x


    for (int i = 0; i < 25; i++)
    {
        a = rand() % 5 + 8;
        cout << a << " ";
    }
    cout << endl;
    const int size = 25;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100; cout << arr[i] << " ";
    }
    const int rows = 4;
    const int cols = 5;
    int array[rows][cols]{};
    cout << endl;
    cout << endl;
    cout << endl;
    for (int i = 0; i < rows; i++)
    {
        int max = array[i][0]; 
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = rand() % 100;
            cout << left << setw(4) <<array[i][j] << " ";
            if (array[i][j] > max) {
                max = array[i][j];
            }
            
        }
        cout << "Max element in " << i << "rows ---->" << max;
        cout << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;
    int array1[3][3] = {1,4,5,1,1,1};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }
}


