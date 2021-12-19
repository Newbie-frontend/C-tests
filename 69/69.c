#include <stdio.h>

int main()
{
    int num, a, b, count = 0, temp = 0, TheNumber;
    for (int i = 10; i < 100; i++)
    {
        num = i;
        while (1)
        {
            a = num % 10;
            b = num / 10;
            count++;
            if (a * b < 10)
                break;
            num = a * b;
        }
        if (count > temp)
        {
            temp = count;
            TheNumber = i;
        }
        count = 0;
    }
    printf("\nCarpim direnci en buyuk olan sayi = %d (Carpim direnci = %d)\n", TheNumber, temp);

    return 0;
}
