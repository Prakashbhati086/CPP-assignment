#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "Enter a natural num: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}