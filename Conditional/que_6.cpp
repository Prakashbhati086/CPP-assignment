/*Write a program to calculate marks to grades . Follow the conversion rule as given below :*/
#include <iostream>
using namespace std;
int main()
{
    float marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks >= 90 && marks <= 100)
    {
        cout << "Grade: A+";
    }
    else if (marks >= 80 && marks <= 90)
    {
        cout << "Grade: A";
    }
    else if (marks >= 70 && marks <= 80)
    {
        cout << "Grade: B";
    }
    else if (marks >= 60 && marks <= 70)
    {
        cout << "Grade: B+";
    }
    else if (marks >= 50 && marks <= 60)
    {
        cout << "Grade: C";
    }
    else if (marks >= 40 && marks <= 50)
    {
        cout << "Grade: D";
    }
    else if (marks >= 30 && marks <= 40)
    {
        cout << "Grade: E";
    }
    else if (marks >= 0 && marks <= 30)
    {
        cout << "Grade: F";
    }
    else
    {
        cout << "Invalid Marks";
    }
    return 0;
}
