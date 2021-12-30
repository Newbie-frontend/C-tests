
#include <stdio.h>

int main()
{
    int num, A = 0, B = 0, C = 0, F = 0;
    float midTerm, final, average, totalAverage = 0;
    printf("Sinif mevcudu kactir?:  ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        printf("%d. ogrencinin vize ve finali : ", i);
        scanf("%f %f", &midTerm, &final);
        if (midTerm < 0 || midTerm > 100 || final < 0 || final > 100)
        {
            printf("Sayilar yanlis. Bir daha deneyin");
            i--;
        }
        else
        {
            average = (0.4 * midTerm + 0.6 * final) / 25;
            if (average < 2)
                F++;
            else if (average < 2.5)
                C++;
            else if (average < 3.5)
                B++;
            else
                A++;
            totalAverage += average;
        }
    }
    printf("-----------------------------------------------\n");
    printf("%d tane F,%d tane C,%d tane B,%d tane A vardir \n", F, C, B, A);
    printf("Genel ortalama %0.2f dir \n", totalAverage/num);


    return 0;
}
