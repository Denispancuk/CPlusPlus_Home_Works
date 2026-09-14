#include <iostream>
using namespace std;
void SayHello();
void Star(int count) {
    for (int i = 0; i < count; i++)
    {
        cout << "* ";
    }
    cout << endl;
}
void AnyChar(char charr, int count) {
    for (int i = 0; i < count; i++)
    {
        cout << charr << " ";
    }
    cout << endl;
}
int MyPow(int number , int step) {
    int pow = 1;
    for (int i = 0; i < step; i++)
    {
        pow *= number;
    }
    cout << "Pow number: " << number << " = " << pow << endl;
    return pow;

}
int max(int a, int b) {
    /*if (a > b)
    {
        return a;
    }
    else {
        return b;
    }*/
    return (a > b) ? a : b;
}
void Change(int a, int b) {
    cout << "a = " << a << " b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << " b = " << b << endl;
}
int main()
{
    srand(time(0));
    const int rows = 5;
    const int cols = 5;
    cout << "Max element: " << max(8, 12) << endl;
    SayHello();
    SayHello();
    SayHello();
    SayHello();
    SayHello();
    SayHello();
    SayHello();
    Star(25);
    AnyChar('%', 51);
    MyPow(2, 5);
    Change(8, 7);

}
void SayHello() {
    cout << "Hello world" << endl;
}