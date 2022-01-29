#include <stdio.h>

void kodCoz(int num, int *a, char *b, char *c)
{
    if (num / 10000 == 1)
        *b = 'S';
    else if (num / 10000 == 2)
        *b = 'M';
    else if (num / 10000 == 3)
        *b = 'L';
    else if (num / 10000 == 4)
        *b = 'X';
    else
        printf("Dogru gir su numarayi \n");
    if ((num % 10000) / 1000 == 1)
        *c = 'E';
    else if ((num % 10000) / 1000 == 2)
        *c = 'K';
    else
        printf("Dogru gir su numarayi \n");
    *a = num % 1000;
}

int main()
{
    int num = -1;
    char boyut, cinsiyet;
    int renk;
    while (num < 0)
    {
        printf("Urun kod numarasini giriniz : ");
        scanf("%d", &num);
    }
    kodCoz(num, &renk, &boyut, &cinsiyet);
    printf("-----------------------------\n");
    printf("Bu urunun boyutu: %c, Cinsiyet: %c, renk kodu: %d", boyut, cinsiyet, renk);

    return 0;
}