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
}