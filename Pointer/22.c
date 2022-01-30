#include <stdio.h>

int Basamakla(long sayi, int *);

int main()
{
    long num;
    int basamak;

    printf("Bir tamsayi giriniz : ");
    scanf("%ld", &num);

    Basamakla(num, &basamak);
    printf("-----------------------------\n");
    printf("Basamak sayisi : %d \n", basamak);

    return 0;
}
int Basamakla(long sayi, int *a) // anlamadim diziyi mi istiyor yada basamagi istiyor
{
    int dizi[21];
    *a = 0;
    for (int i = 0; i < 21; i++)
    {
        dizi[i] = sayi % 10;
        sayi /= 10;
        (*a)++;
        if (sayi == 0)
        {
            dizi[i + 1] = -1;
            break;
        }
    }
}