#include <stdio.h>

int ucret(int b)
{
    if (b == 1)
        return 3;
    return ucret(b - 1) * 2;
}
int toplama(int x) {
    if (x==1)
        return ucret(1);
    return ucret(x) + toplama(x-1);   
}

int main()
{
    int gunSayisi, toplam = 0;
    printf("Gun sayisini giriniz :");
    scanf("%d", &gunSayisi);
    for (int i = 1; i <= gunSayisi; i++)
        toplam += ucret(i);
    printf("\nWith a recursion and a loop : %d \n", toplam);
    printf("\nWith 2 recursion function : %d \n", toplama(gunSayisi));

    return 0;
}