
#include <stdio.h>

int main() {
    int  start, end, count = 0;
    printf("Baslangic yilini giriniz : ");
    scanf("%d", &start);
    printf("Bitis yilini giriniz : ");
    scanf("%d", &end);
    printf("-------------------------------------\n");
    for (int i = start; i <= end; i++)
    {
        if (i%4 == 0){
            printf("%d,  ",i);
            count++;
        }
    }
    printf ("\nToplam %d adet\n", count);

    return 0;
}
