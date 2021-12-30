
#include <stdio.h>
#include <math.h>

int main()
{
    int a, num, total = 0;
    for (int i = 2; i <= 2400; i++)
    {
        num = i;
        for (int j = 0; j < 2; j++)
        {
            a = num % 100;
            num /= 100;
            total += a*a;
        }
        if (total == i){
            printf ("\nSaat  %d:%d \n", (i/100)%100, i%100);
            break;
        }
        total = 0;
    }

    return 0;
}
