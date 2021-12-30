
#include <stdio.h>

int main() {
    int  start, end, count = 0, birinci, ikinci;
    printf("Birinci sayiyi giriniz : ");
    scanf("%d", &birinci);
    printf("ikinci giriniz : ");
    scanf("%d", &ikinci);
    if (birinci < ikinci)
    {
        start = birinci;
        end = ikinci;
    }
    else {
        start = ikinci;
        end = birinci;
    }
    printf("-------------------------------------\n");
    for (int i = start; i <= end; i++)
    {
        if (i%28 == 0){
            printf("%d,  ",i);
            count++;
        }
    }
    printf ("\nToplam %d adet\n", count);

    return 0;
}
