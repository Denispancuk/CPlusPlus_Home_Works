#include <iostream>
using namespace std;

int main()
{
    // !!! Перше завдання
    int Diagonal;
    const float floatInCM = 2.54;
    float result;
    cout << "Enter a number inch in TV: ";
    cin >> Diagonal;
    result = Diagonal * floatInCM;
    cout << "Result: " << result << endl;
    // !!! Друге завдання
    int hamsterFood;
    float resultSecond;
    cout << "Enter a grams food hamster: ";
    cin >> hamsterFood;
    resultSecond = (hamsterFood * 30) / 1000;
    cout << "Result: " << resultSecond << endl;
}
