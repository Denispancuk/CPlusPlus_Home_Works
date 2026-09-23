#include <iostream>
using namespace std;
void Initarray(int* arr, int size) {
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = rand() % 100;
    }
}
void Showarray(int* arr, int size) {
    cout << "Array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    arr--;
    cout << "Reverse array:" << endl;
    for (int i = size; i > 0; i--)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    
}
int* MaxArr(int* arr, int size){
    int* max = arr;
    for (int i = 0; i < size; i++)
        {
        if (*max < *(arr + i))
        {
            max = (arr + i);
        }

        }
    return max;
}
int* MinArr(int* arr, int size){
    int* min = arr;
    for (int i = 0; i < size; i++)
        {
        if (*min > *(arr + i))
        {
            min = (arr + i);
        }

        }
    return min;
}

int main()
{
    srand(time(0));
    //First task
    int a = 10;
    int* pa = &a;

    int b = 20;
    int* pb = &b;

    int c = 30;
    int* pc = &c;

    cout << "Dobutok: " << *pa * *pb * *pc << endl;
    cout << "Average: " << (*pa + *pb + *pc)/3 << endl;
    if (*pa < *pb and *pa < *pc)
    {
        cout << "Min: " << *pa << endl;
    }
    else if (*pb < *pa and *pb < *pc)
    {
        cout << "Min: " << *pb << endl;
    }
    else if (*pc < *pa and *pc < *pb)
    {
        cout << "Min: " << *pc << endl;
    }
    else {
        cout << "All numbers equalse: " << *pa << endl;
    }
    //Second task
    const int size = 10;
    int arr[size];
    int* PArr = arr;
    Initarray(PArr, size);
    Showarray(PArr, size);
    //Third task
    int* temp = MaxArr(PArr, size);
    int* a1 = MaxArr(PArr, size);
    int* b1 = MinArr(PArr, size);
    b1 = a1;
    a1 = temp;
    cout << "Max: " << MaxArr(PArr, size) << endl; 
    cout << "Min: " << MinArr(PArr, size) << endl; 
    Showarray(PArr, size);
}
