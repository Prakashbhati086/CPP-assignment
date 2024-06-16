#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int absoluteValue = (num < 0) ? -num : num;

    cout << "The absolute value of " << num<< " is: " << absoluteValue << endl;

    return 0;
}
