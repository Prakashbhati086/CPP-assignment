#include <iostream>
using namespace std;
void sqrs(int n, int sqr)
{
    n = 5;
    for (int i = 1; i <= n; i++)
    {
        sqr = i * i;
        cout << sqr << " ";
    }
}
int main()
{
    int n, sqr;
    sqrs(n, sqr);
}