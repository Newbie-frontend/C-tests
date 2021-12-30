
#include <stdio.h>

int main()
{
    int num, num2;
    printf("Baslangic sayisini giriniz : ");
    scanf("%d", &num);
    while (1)
    {
        printf("Bir sayi giriniz (bir onceki sayiyi girerseniz durur) : ");
        scanf("%d", &num2);
        if (num2 > num)
            printf("ARTIYOR \n");
        else if (num2 < num)
            printf("AZALIYOR \n");
        else
            break;
        num = num2;
    }

    return 0;
}
