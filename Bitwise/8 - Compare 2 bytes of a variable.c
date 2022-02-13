#include <stdio.h>
unsigned bu_nedir(unsigned);
void bityazdir(unsigned int);
int main(void)
{
    unsigned a = 1053; 
    bityazdir(a); // 00000100 00011101
    printf("\n%u", bu_nedir(a));
}
unsigned bu_nedir(unsigned sayi)
{
    unsigned a, b, m;

    a = sayi & 255;
    b = sayi >> 8;
    if (a > b)
        m = a; //00011101
    else
        m = b; //00000100
    return m;
}
void bityazdir(unsigned int a)
{
    printf("( ");
    unsigned k = 1 << 31; // unsigned because last bit is for negative or positive declaration
    for (size_t i = 0; i < sizeof(unsigned) * 8; i++)
    {
        if ((a & (k >> i)) == (k >> i))
            printf("1");
        else
            printf("0");

        if ((i + 1) % 8 == 0)
            printf(" ");
    }
    printf(")");
}