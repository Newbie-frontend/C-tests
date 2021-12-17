#include <stdio.h>

int main()
{
    float sell, buy ,profitRate;
    int fail=0, success=0;
    printf("XX ithalat-ihracat sirketi kar/zarar programi\n");
    printf("------------------------------------------------\n");
    while (1)
    {
        printf("alis ve satis degerlerini giriniz : ");
        scanf("%f %f", &buy, &sell);
        if (sell == 0 || buy == 0)
            break;
        profitRate = (sell - buy)/ buy;
        if (profitRate < 0)
        {
            printf("  (Zarar orani %0.2f)\n", -profitRate);
            fail++;
        }
        else if (profitRate > 0)
        {
            printf("  (Kar orani %0.2f)\n", profitRate);
            success++;
        }
    }
    printf("------------------------------------------------\n");
    printf("Program sona erdi\n");
    printf("Toplam da %d islemden kar, %d islemden zarar edilmistir.\n", success, fail);


    return 0;
}
