// Find first prime number after entered number

#include <iostream>
#include <math.h>
using namespace std;

void asalatamamla(int &);

int main()
{
    int num;
    cout << " Tam sayiyi giriniz : ";
    cin >> num;
    asalatamamla(num);
    cout << "---------------------------------------" << endl
         << "Sayinin donustugu asal sayi = " << num << endl;

    return 0;
}
void asalatamamla(int &num)
{
    int temp;
    bool flag = false;
    temp = num;
    while (!flag)
    {
        flag = true;
        temp++; // if we assume that even if the number is prime, we want next number
        double x = sqrt(temp);
        for (size_t i = 2; i <= x; i++)
            if (temp % i == 0)
            {
                flag = false;
                break;
            }
        if (flag)
            num = temp;
    }
}
