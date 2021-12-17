#include <stdio.h>

int main()
{
    int start, end, count = 0, total = 0;
    while (1) {
    printf("Baslangic degerini griniz : ");
    scanf("%d", &start);
    printf("Bitis degerini griniz : ");
    scanf("%d", &end);
    if (start >= end)
        printf("Hata!!\nbitis degeri baslangic degerinden kucuk ya da esit olamaz\n");
    else
        break;
    }
    printf("-----------------------------------------------\n");
    for (int i = start; i <= end; i++){
        if (i%3 == 0 || i%11 == 0){
            printf("%d, ", i);
            count++;
            total +=i;
        }
    }
    printf("\nkurala uyan toplamda %d adet sayi bulunmaktadir\n", count);
    printf("Toplamlari = %d\n", total);

    return 0;
}
