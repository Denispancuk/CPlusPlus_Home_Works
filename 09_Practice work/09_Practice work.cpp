#include <iostream>
using namespace std;
int MaxNumbers(int a, int b) {
    return (a > b) ? a : b;
}
double MaxNumbers(double a, double b) {
    return (a > b) ? a : b;
}
float MaxNumbers(float a, float b) {
    return (a > b) ? a : b;
}

int MaxNumber3(int a, int b, int c) {
    if (a > b and a > c)
    {
        return a;
    }
    else if (b > a and b > c)
    {
        return b;
    }
    else {
        return c;
    }
}
float MaxNumber3(float a, float b, float c) {
    if (a > b and a > c)
    {
        return a;
    }
    else if (b > a and b > c)
    {
        return b;
    }
    else {
        return c;
    }
}
double MaxNumber3(double a, double b, int c) {
    if (a > b and a > c)
    {
        return a;
    }
    else if (b > a and b > c)
    {
        return b;
    }
    else {
        return c;
    }
}



int MinNumber3(int a, int b, int c) {
    if (a < b and a < c)
    {
        return a;
    }
    else if (b < a and b < c)
    {
        return b;
    }
    else {
        return c;
    }
}
float MinNumber3(float a, float b, float c) {
    if (a < b and a < c)
    {
        return a;
    }
    else if (b < a and b < c)
    {
        return b;
    }
    else {
        return c;
    }
}
double MinNumber3(double a, double b, double c) {
    if (a < b and a < c)
    {
        return a;
    }
    else if (b < a and b < c)
    {
        return b;
    }
    else {
        return c;
    }
}

int MinNumbers(int a, int b) {
    return (a < b) ? a : b;
}
double MinNumbers(double a, double b) {
    return (a < b) ? a : b;
}
float MinNumbers(float a, float b) {
    return (a < b) ? a : b;
}

template < typename Universal>
Universal Average(Universal arr[], int size) {
    int count = 0;
    Universal Sum = 0;
        for (int i = 0; i < size; i++)
        {
            count++;
            Sum += arr[i];
        }
        return Sum / count;
}

int main()
{
    // First Task
    int a = 1, b = 4;
    float a1 = 0.1, b1 = 0.4;
    double a2 = 123453, b2 = 745395;
    int c = 12;
    float c1 = 0.111;
    double c2 = 43987;


    cout << "Maximum number: " << MaxNumbers(a, b) << endl;
    cout << "Maximum number: " << MaxNumbers(a1, b1) << endl;
    cout << "Maximum number: " << MaxNumbers(a2, b2) << endl;
    
    cout << "Minimum number: " << MinNumbers(a, b) << endl;
    cout << "Minimum number: " << MinNumbers(a1, b1) << endl;
    cout << "Minimum number: " << MinNumbers(a2, b2) << endl;

    cout << "Maximum of 3 numbers: " << MaxNumber3(a,b,c) << endl;
    cout << "Maximum of 3 numbers: " << MaxNumber3(a1,b1,c1) << endl;
    cout << "Maximum of 3 numbers: " << MaxNumber3(a2,b2,c2) << endl;

    cout << "Minimum of 3 numbers: " << MinNumber3(a,b,c) << endl;
    cout << "Minimum of 3 numbers: " << MinNumber3(a1,b1,c1) << endl;
    cout << "Minimum of 3 numbers: " << MinNumber3(a2,b2,c2) << endl;
    
    // Second Task
    const int size = 7;
    int arr[size] = { 1,2,3,4,5,6,7 };
    float arr1[size] = { 0.1,0.2,0.3,0.4,0.5,0.6,0.7}; 
    double arr2[size] = {345435,453453,43234,567567,876568,45645,435453}; 
    cout << "Average: " << Average(arr, size) << endl;
    cout << "Average: " << Average(arr1, size) << endl;
    cout << "Average: " << Average(arr2, size) << endl;

    // Third Task
    int arr3[size] = { 1,2,3,4,5,6,7 };
    float arr4[size] = { 0.1,0.2,0.3,0.4,0.5,0.6,0.7 };
    const int rows = 4, cols = 4;


    int arr5[size] = { 1,2,3,4,5,6,7 };
    float arr6[size] = { 0.1,0.2,0.3,0.4,0.5,0.6,0.7 };


}
