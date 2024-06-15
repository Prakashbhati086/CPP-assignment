#include <iostream>
using namespace std;
int main()
{
    char s = 'U';
    int asciiValue = static_cast<int>(s);
    cout << "ASCII value " << s << " is: " << asciiValue << endl;
    return 0;
}