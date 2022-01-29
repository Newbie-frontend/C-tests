#include <stdio.h>

void serinoCoz(int num, char *a, int *b, int *c)
{
    if (num / 1000 == 1)
        *a = 'A';
    else if (num / 1000 == 2)
        *a = 'B';
    else if (num / 1000 == 3)
        *a = 'C';
    *b = (num / 10) % 100;
    *c = num % 10;
}

int main()
{
    int num = 0;
    int block, daire, arac;
    while (num < 1000 || num >10000)
    {
        printf("Arac tanitim karti seri numarasini giriniz : ");
        scanf("%d", &num);
    }
    serinoCoz(num, &block, &daire, &arac);
    printf("-----------------------------\n");
    printf("Bu arac %c blokda %d nolu dairenin %d. aracidir \n", block, daire, arac);

    return 0;
}