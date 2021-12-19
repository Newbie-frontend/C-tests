
#include <stdio.h>

int main()
{
    int count;
    float num, tempTotal = 0, total = 0;
    while (1)
    {
        printf("Olcum sayisi  :  ");
        scanf("%d", &count);
        if (count == 0)
        {
            printf("Genel toplam   :   %0.2f \n", total);
            break;
        }
        for (int i = 0; i < count; i++)
        {
            printf("Olcum giriniz :  ");
            scanf("%f", &num);
            tempTotal += num;
        }
        printf("\tAra toplam   :   %0.2f \n", tempTotal);
        total += tempTotal;
        tempTotal = 0;
    }

    return 0;
}
