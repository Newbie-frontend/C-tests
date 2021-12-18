
#include <stdio.h>

int main() {
    int num, total = 0;
    printf("\nSayiyi giriniz : ");
    scanf("%d", &num);
    printf("------------------------------------\n");
    for (int i = 1; i < num; i++)
    {
        if (num%i == 0)
            total += i;
    }
    if (total < num)
        printf("Girilen sayi noksan sayidir \n");
    else
        printf("Girilen sayi noksan sayi degildir \n");
    return 0;
}
