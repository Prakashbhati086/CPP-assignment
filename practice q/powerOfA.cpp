#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;

    int result = 1; 
    for (int i = 0; i < a; i++)
    {
        result *= a; 
    }

    cout << a << "^" << b << " = " << result << endl;

    return 0;
}
