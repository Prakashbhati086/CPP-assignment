/*Write a program to print alphabet diamond pattern:*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows  & colonm: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = n; j > i; j--)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }

    return 0;
}
