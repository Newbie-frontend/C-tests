#include <stdio.h>

int main()
{
    int num, count = 0, biggest = 1000, lowest = 10000, total = 0;

    while (1)
    {
        while (1)
        {
            printf("Model yilini giriniz (Durdurmak icin 0) : ");
            scanf("%d", &num);
            if (num == 0)
                break;
            else if (num < 1000 || num > 10000)
                printf("Hata!!! Lutfen 4 haneli giriniz \n");
            else
                break;
        }
        if (num == 0)
            break;
        count++;
        if (num > biggest)
            biggest = num;
        if (num < lowest)
            lowest = num;
        total += num;
    }
    if (count != 0)
    {
        printf("----------------------------------------------------------\n");
        printf("Toplam %d tane arac giris yapti\n", count);
        printf(" Ortalama = %d, kirpilmis ortalama = %d \n", total / count, (total - (biggest + lowest)) / (count - 2));
    }

    return 0;
}
