#include <stdio.h>

int main() {
    char note = 'z';
    int A=0, B=0, C=0, D=0;
    float Average, total = 0;
    while ( note != 'h'|| note != 'H')
    {
        printf("Harf notunu giriniz (Cikis icin H ya da h giriniz) : ");
        scanf("%c", &note);
        if (note == 'a' || note == 'A')
        {
            A++;
            total += 4;
        }
        else if (note == 'b' || note == 'B')
        {
            B++;
            total += 3;
        }
        else if (note == 'c' || note == 'C')
        {
            C++;
            total += 2;
        }
        else if (note == 'd' || note == 'D')
        {
            D++;
        }
        else if (note == 'h' || note == 'H'){}
        else
            printf("\nGecersiz not!!!! \n");
    }
    Average = total / (A+B+C+D);
    printf("Girilen A larin sayisi : %d \n", A);
    printf("Girilen B larin sayisi : %d \n", B);
    printf("Girilen A larin sayisi : %d \n", C);
    printf("Girilen A larin sayisi : %d \n", D);
    printf("Toplam harf sayisi     : %d \n", A+B+C+D);
    printf("Ortalama               : %d \n", Average);

    return 0;
}
