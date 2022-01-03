#include <stdio.h>

void toplaCikar(int a, int b, int *pa, int *pb)
{
    *pa = a + b;
    *pb = a - b;
}

int main()
{
    int a, b, topla, cikar;
    printf("iki sayi giriniz : ");
    scanf("%d %d", &a, &b);
    toplaCikar(a, b, &topla, &cikar);
    printf("%d %d", topla, cikar);

    return 0;
}