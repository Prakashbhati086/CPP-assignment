#include <iostream>
using namespace std;
void eligibleVoter(int age)
{
    if (age >= 18)
    {
        cout << "You are eligible to vote" << endl;
    }
    else
    {
        cout << "You are not eligible to vote" << endl;
    }
}

int main()
{
    int age;
    cout << "Enter your age" << endl;
    cin >> age;
    eligibleVoter(age);
}
