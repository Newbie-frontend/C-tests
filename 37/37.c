
#include <stdio.h>

int main() {
    int num, cross = 1, add = 0, total = 0, a, count = 0;
    printf("\nAranilan sayilar : ");
    for (int i = 100; i <= 999; i++)
    {
        num = i;
        for (int j = 0; j < 3; j++)
        {
            a = num%10;
            num /= 10;
            cross *= a;
            add += a;
        }
        total = cross * add;
        add = 0;
        cross = 1;
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
