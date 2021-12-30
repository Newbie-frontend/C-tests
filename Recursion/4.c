#include <stdio.h>

int ucret(int b)
{
    if (b == 1)
        return 3;
    return ucret(b - 1) * 2;
}

int main()
{
    int gunSayisi, toplam = 0;
    printf("Gun sayisini giriniz :");
    scanf("%d", &gunSayisi);
    for (int i = 1; i <= gunSayisi; i++)
    {
        toplam += ucret(i);
    }
    
    printf("\n%d \n", toplam);

    return 0;
}