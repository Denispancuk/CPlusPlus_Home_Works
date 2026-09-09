#include <iostream>
using namespace std;
int main()
{
    //int a = 5, b = 4;
    //cout << a + b << endl;
    //cout << a - b << endl;
    //cout << a * b << endl;
    //cout << a / b << endl;
    //cout << a % b << endl;
    // a = 2;
    // a = a + 1;
    // cout << "a = " << a << endl;
    // a++;
    // cout << "a = " << a << endl;

    // a--;// Post prefix decrement
    // cout << "a = " << a << endl;
    // --a;//prefix decrement
    // cout << "a = " << a << endl;
    // int c = 5;
    // cout << "c = " << c++ << endl;
    // cout << "c = " << ++c << endl;
    // cout << "c = " << c << endl;
    // c++;
    // cout << "c = " << c << endl;
    // c += 12;
    // cout << "c = " << c << endl;
    // c -= 12;
    // cout << "c = " << c << endl;
    // int A = 3.33;
    // cout << "A = " << A << endl;
    // double pi = 3.33;
    // cout << pi << endl;
    // int salary = 30000000000;
    // cout << "Salary = " << salary << endl;
    // unsigned int salary = 30000000000;
    // cout << "Salary = " << salary << endl;
    // // 2 - явне перетворення
    // double num = 37.4;
    // float num2 = (int)num;
    // int number1 = 20, number2 = 10;
    // cout << "Enter a number1 :" << endl;
    // cin >> number1;
    // cout << "Enter a number2 :" << endl;
    // 
    // 
    // cin >> number1;
    // int day;
    // if (number2 == 0) {
    //     cout << "you cant divide zero" << endl;
    // }
    // else {
    //     float res = number1 / number2;
    //     cout << "res:" << res << endl;
    // }
    // cout << "Enter a number day: ";
    // cin >> day;
    //     if (day == 1) {
    //         cout << "Monday" << endl;
    //    }
    //     else if (day == 2) {
    //         cout << "Tuesday" << endl;
    //    }
    //     else if (day == 3) {
    //         cout << "Wednesday" << endl;
    //    }
    //// тернарний оператор
    float a=0, b=0, res;
    
    char key = 'y';
    cout << "Choose the operation: " << endl;
    cout << "[+] - Add number" << endl;
    cout << "[-] - Sub number" << endl;
    cout << "[/] - div number" << endl;
    cout << "[*] - Mult number" << endl;
    cin >> key;
    if (key == '+') {
        res = a + b;
        cout << "Result" << res << endl;
}
    else if (key == '-') {
        res = a - b;
        cout << "Result" << res << endl;
}
    else if (key == '/') {
        res = a / b;
        cout << "Result" << res << endl;
}
    else if (key == '*') {
        res = a * b;
        cout << "Result" << res << endl;
}
    switch (key)
    {
    case '-':
        res = a - b;
        cout << "Result" << res << endl;
        break;
    case '+':
        res = a + b;
        cout << "Result" << res << endl;
        break;
    case '*':
        res = a * b;
        cout << "Result" << res << endl;
        break;
    case '/':
        res = a / b;
        cout << "Result" << res << endl;
        break;
    default:
        cout << "Error choice" << endl;
        break;
    }
    int day = 5;
    cout << "Enter a number day : ";
    cin >> day;
    switch (day) {
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Work day";
   }
}
