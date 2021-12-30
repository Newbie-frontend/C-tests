#include <stdio.h>

int bolenToplami(int a)
{
    int toplam = 0;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            toplam += i;
        }
    }
    return toplam;
}

int kontrol(int x, int y)
{
    if (bolenToplami(x) == y && bolenToplami(y) == x)
        return 1;
    else
        return 0;
}

int main()
{
    int a = -1, b = -1, Value;
    while (a < 0 || b < 0)
    {
        printf("Enter 2 numbers : ");
        scanf("%d %d", &a, &b);
        if (a < 0 || b < 0)
            printf("sayilar ikiside positif olmak zoruda.");
    }
    Value = kontrol(a, b);

    printf("Return is %d", Value);

    return 0;
}
