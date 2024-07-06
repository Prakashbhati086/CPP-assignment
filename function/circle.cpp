#include <iostream>
using namespace std;
void cirle(float r, float pi)
{
    float area = r * r * pi;
    float cir = 2 * pi * r;
    cout << "Area of circle is " << area << endl;
    cout << "Circumference of circle is " << cir << endl;
}
int main()
{
    float r = 3;
    float pi = 3.14;
    cirle(r, pi);
}