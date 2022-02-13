#include <stdio.h>

void bitgoster(unsigned int);
int sifirsay(unsigned int);

int main(int argc, char const *argv[])
{
    unsigned int k = 12, m = 7;

    bitgoster(k);
    printf("%d\n", sifirsay(k));
    bitgoster(m);
    printf("%d\n", sifirsay(m));
    return 0;
}

void bitgoster(unsigned int a)
{
    unsigned k = 1 << 31;
    printf("%u\t= ", a);
    for (size_t i = 0; i < sizeof(unsigned) * 8; i++)
    {
        if (a & (k >> i))
            printf("1");
        else
            printf("0");
        if ((i + 1) % 8 == 0)
            printf(" ");
    }
    printf("\n");
}

int sifirsay(unsigned int a)
{
    int count = 0, j;
    unsigned k = 1 << 31;
    for (j = 0; j < sizeof(unsigned) * 8; j++)
        if (a & (k >> j))
           break;  

    for (size_t i = 0; i < sizeof(unsigned) * 8 - j; i++)
        if ((a & (1 << i)) == 0)
            count++;
    return count;
}