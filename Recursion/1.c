#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int x()
{

    return;
}
void deneme2(int s)
{
    if (s > 3)
    {
        printf("%d", s);
        deneme2(s - 1);
    }
    return;
}

int main()
{
    int sayi = 7;
    deneme2(sayi);

    return 0;
}