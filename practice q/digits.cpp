//cout digits.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum=0;

    int digits=0;
    while(n > 0) {
        int lastDigits= n%10;
        sum=sum+lastDigits;
        digits++;
        n /= 10;
        }
        cout<<"Digits cout: "<<digits<<endl;
        cout<<"Sum of last digits: "<<sum;
        return 0;
        }
