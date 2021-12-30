#include <stdio.h>


int main() {
    int num, a, total = 0;
    for (int i = 1000; i <= 9999; i++)
    {
        num = i;
        for (int j = 0; j < 4; j++)
        {
            a = num%10;
            num /= 10;
            total += a;
        }
        if (i == pow(total, 3) && i != 4913)
        {
            printf ("\nSayi = %d\n", i);
        }
        total = 0;
    }

    return 0;
}
