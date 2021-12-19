#include <stdio.h>
#include <math.h>

int main()
{
    int num, a, count = 1, temp = 0, realNumber;
    for (int num = 10; num <= 50; num++)
    {
        a = num;
        while (1)
        {
            if (a % 2 == 0)
                a /= 2;
            else
                a = a * 3 + 1;
            count++;
            if (a == 1)
                break;
        }
        if (count > temp)
        {
            temp = count;
            realNumber = num;
        }
        count = 1;
    }
    printf("Aranan sayi : %d \n", realNumber);
    printf("Collatz serisi %d adet sayidan olusur \n", temp);

    return 0;
}
