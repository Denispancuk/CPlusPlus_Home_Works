#include <iostream>
using namespace std;
void rectangle(int rows, int cols) {
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void factorial(int num) {
    int temp = 1;
    for (int i = 1; i <= num; i++)
    {
        temp *= i;
    }
    cout << "Factorial number: " << temp << endl;
}
void SimpleNumber(int num){
    int temp = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            temp++;
        }
    }
    if (temp == 2) {
        cout << "Number simple" << endl;
    }
    else {
        cout << "Number not simple" << endl;
    }
}
int Cube(int num) {
    return (num * num * num);
}
int main()
{
    // First task
    int rows = 0;
    int cols = 0;
    cout << "Enter number rows: ";
    cin >> rows;
    cout << "Enter number column: ";
    cin >> cols;
    rectangle(rows, cols);
    // Second task
    int num = 0;
    cout << "Enter number factorial: ";
    cin >> num;
    factorial(num);
    // Third task
    cout << "Enter number: ";
    cin >> num;
    SimpleNumber(num);
    // Fourth task
    cout << "Enter number: ";
    cin >> num;
    cout << "Cube number: " << Cube(num) << endl;
    // Fiveth task


    
}