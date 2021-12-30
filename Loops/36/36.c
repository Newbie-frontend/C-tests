
#include <stdio.h>
#include <math.h>

int main() {
    int num, total = 0, a, count = 0;
    printf("\nAranilan sayilar : ");
    for (int i = 100; i <= 999; i++)
    {
        num = i;
        for (int j = 0; j < 3; j++)
        {
            a = num%10;
            num /= 10;
            total += pow(a, 3);
        }
        if (total == i)
        {
            printf("%d, ", i);
            count++;
        }
        total = 0;
    }


    printf("\nBu ozellige sahip %d adet uc basamali sayi vardir\n", count);

    return 0;
}
