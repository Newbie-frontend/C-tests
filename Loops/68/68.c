#include <stdio.h>

int main()
{
    int num, a, b, count = 0;
    for (int i = 10; i < 100; i++)
    {
        num = i;
        while (1)
        {
            a = num % 10;
            b = num / 10;
            count++;
            if (a * b < 10)
            {
                printf("%d sayinin carpim direnci = %d \n", i, count);
                break;
            }
            num = a * b;
        }
        count = 0;
    }

    return 0;
}
