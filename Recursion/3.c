#include <stdio.h>

void ikilik(int s)
{
    if (s == 1)
        printf("1");
    else if (s == 0)
        printf("0");
    else if (s / 2 != 0)
    {
        ikilik(s / 2);
        printf("%d", s % 2);
    }
}

int main()
{
    int sayi;
    printf("Sayiyi giriniz : ");
    scanf("%d", &sayi);
    ikilik(sayi);
    
    return 0;
}