#include <iostream>
using namespace std;

int main()
{
    int age = 15;
    int Age = 55;
    int age1 = 14;
    //int 2age = 15; - ERROR
    int age_of_man = 33;
    int AgeOfMan = 78;
    const float pi = 3.14;
    double d = 3.33;
    //int int = 77; - ERROR
    cout << age;
    cout << "Age :" << age << "Age of man: " << age_of_man << endl;
    cout << "PI = " << pi << endl;

    //count days in 2000 years
    int countInYears2000_Years;//empty variable
    const int dayIn2000Year = 366;
    int hourInDay = 24;
    countInYears2000_Years = dayIn2000Year * hourInDay;
    cout << "Hour in 2000 year : " << countInYears2000_Years;



    float discount = 0.05;
    int count = 10;
    float costPrice = 35.99;
    cout << "Enter count products";
    cin >> count;
    cout << "Enter cost : ";
    cin >> costPrice;
    float price = count * costPrice - discount * count * costPrice;

    cout << "You need to pay: " << price << "grn" << endl;

    int a;
    cout << "Enter number : ";
    cin >> a;
    cout << "a = " << a << endl;

}