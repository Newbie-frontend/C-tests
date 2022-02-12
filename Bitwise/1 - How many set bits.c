#include <stdio.h>

int kontrol(unsigned);

int main(int argc, char const *argv[])
{
    unsigned x;
    printf("Bir sayi giriniz : ");
    scanf("%u", &x);
    if (kontrol(x))
        printf("tek");
    else
        printf("cift");
    return 0;
}

int kontrol(unsigned a)
{
    int count = 0;
    for (size_t i = 0; i < sizeof(unsigned) * 8; i++)
        if (a & (1 << i)) // & will return the value of (1<<i) if that bit is set 
            count++;
    if (count % 2)
        return 1;
    else
        return 0;
}