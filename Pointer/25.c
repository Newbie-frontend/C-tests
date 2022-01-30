#include <stdio.h>

void asalatamamla(int n, int *a)
{
    int count = 0;
    for ((*a) = 2; !(count == 2 && (*a) > n); (*a)++)
    {
        count = 0;
        for (int i = 1; i <= (*a); i++)
            if ((*a) % i == 0)
                count++;
    }
    (*a)--; // lol , boyle daha kisa bi kod ama
}

int main()
{
    int n;
    int asal;
    printf("Tam sayiyi giriniz : ");
    scanf("%d", &n);
    asalatamamla(n, &asal);
    printf("----------------------------\n");
    printf("Sayinin donustugu asal sayi = %d\n", asal);
    return 0;
}
