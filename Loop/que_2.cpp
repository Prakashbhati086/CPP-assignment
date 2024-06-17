/*Write a program to print
all Armstrong numbers between 100 to 500.*/
#include <iostream>
using namespace std;

int main() {
    for (int i = 100; i < 500; i++) {
        int sum = 0;
        int digits = i;

        while (digits != 0) {
            int rem = digits % 10;
            sum += rem * rem * rem;
            digits /= 10;
        }

        if (sum == i) {
            cout << i << " is an Armstrong number." << endl;
        }
    }

    return 0;
}
