#include <stdio.h>
#include <math.h>


int main() {
    int num, a, count=1;
    printf("sayiyi giriniz : ");
    scanf("%d", &num);
    a = num;
    while (1)
    {
        printf("%d  ", a);
        if (num <= 0)
        {
            printf("YANLIS!! Lutfen pozitif bir sayi giriniz : ");
            scanf("%d", &num);
            a = num;
            continue;
        }
        else if (a%2 == 0)
            a /= 2;
        else
            a = a*3+1;
        count++;
        if (a == 1)
        {
            printf("%d", a);
            break;
        }
    }
    printf("\nseri %d adet sayidan olusur \n", count);
    return 0;
}
