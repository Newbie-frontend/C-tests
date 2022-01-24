#include <stdio.h>

void deneme2(int s)
{
    if (s > 3)
    {
        printf("%d ", s);
        deneme2(s - 1);
    }
}

int main()
{
    int sayi = 7;
    deneme2(sayi);

    return 0;
}