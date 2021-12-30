#include <stdio.h>


int main() {
    int num, a, total = 0, each = 1;
    for (int i = 100; i <= 999; i++)
    {
        num = i;
        for (int j = 0; j < 3; j++)
        {
            a = num%10;
            num /= 10;
            for (int k = 1; k <= a; k++)
            {
                each *= k;
            }
            if (a == 0)
                total++;
            
            total += each;
            each = 1; 
        }
        if (total == i)
            printf("\nAradiginiz sayi = %d\n", i);
        total = 0;
    }

    return 0;
}
