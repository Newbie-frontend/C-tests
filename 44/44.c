#include <stdio.h>
#include <math.h>

int main() {
    int num;
    int fail = 0, temp, a, total = 0;
    printf("\nSekizlik tabanda sayi giriniz : ");
    scanf("%d", &num);
    printf("----------------------------------------\n");
    temp = num;
    for (int i = 0; i < 8; i++)
    {
        if (temp%10 > 7 ){
            printf("Sayi 8lik sayi sisteminde degil.");
            fail++;
            break;
        }
        a = temp%10;
        temp /= 10;
        total += a*pow(8, i);
    }
    if (fail == 0)
        printf("Onluk tabandaki karsiligi : %d\n", total);

    return 0;
}
