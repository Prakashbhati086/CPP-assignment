#include <iostream>
using namespace std;

int main()
{
    int num1, num2, temp;
    num1 = 2;
    num2 = 3;
    cout << "Before swap: " << num1 << " and " << num2 << endl;

    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "After swapping: num1 " << num1 << " num2 " << num2 << endl;

    return 0;
}
