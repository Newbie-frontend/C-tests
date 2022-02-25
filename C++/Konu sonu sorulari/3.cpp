// Find first prime number after entered number

#include <iostream>
#include <math.h>
using namespace std;

void simetrik(int &, int &, char);

int main()
{
    int x, y;
    char ch;
    cout << "Enter coordination and axis (x, y), X/Y/O : ";
    cin >> x >> y >> ch;
    simetrik(x, y, ch);
    cout << "Simetrik is (" << x << ", " << y
         << ")" << endl;
    return 0;
}
void simetrik(int &x, int &y, char ch)
{
    int temp;
    switch (ch)
    {
    case 'X':
        y *= -1;
        break;
    case 'Y':
        x *= -1;
        break;
    case 'O':
        temp = y;
        y = x * -1;
        x = temp * -1;
        break;
    default:
        x = 0;
        y = 0;
        break;
    }
}
