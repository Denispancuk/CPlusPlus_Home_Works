#include <iostream>
using namespace std;
int main()
{
    
    int N = 10;
    cout << "First task" << endl;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i > j) {
                cout << "  ";
            }
            else {
                cout << " +";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Second task" << endl;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i < j) {
                cout << "  ";
            }
            else {
                cout << " +";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Third task" << endl;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i < j and i + j < N) {
                cout << " +";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Fourth task" << endl;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i > j and i + j > N) {
                cout << " +";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Fiveth task" << endl;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i > j and i + j > N or i <= j and i + j <= N) {
                cout << " +";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Sixth task" << endl;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i >= j and i + j <= N or i < j and i + j > N) {
                cout << " +";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Seventh task" << endl;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i >= j and i + j <= N) {
                cout << " +";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Eighth task" << endl;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i < j and i + j > N) {
                cout << " +";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Nineth task" << endl;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i + j < N+1) {
                cout << " +";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "tenth task" << endl;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i + j > N) {
                cout << " +";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Eleventh task" << endl;
    int n;
    cout << "Enter a n: ";
    cin >> n;
    
    for (int i = 0; i<=n ; i++)
    {
        N = n;
        for (int j = 0; j < i*n; j++)
        {
            cout << i;

        }
        cout << endl;
    }
    cout << endl;
    cout << "Thirhtenth task" << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == j or i + j == 10-1) {
                cout << "0 ";
            }
            else {
                cout << "1 ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Fourthtenth task" << endl;
    for (int i = 10; i > 0; i--)
    {
        
        for (int j = 0; j < i; j++)
        {
            N += i;
            cout << i;

        }
        cout << endl;
    }
 

}