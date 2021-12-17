#include <stdio.h>


int main() {
    int  model ,best = 0, count = 1, temp = 0;
    while (1)
    {
        printf ("Model yilini giriniz (Durdurmak icin 0) : ");
        scanf ("%d", &model);
        if (model == 0 && temp ==0)
            printf("En az bir dogru deger girmelidir.\n");
        else if (model == 0 && temp !=0)
            break;
        else if (model > 9999 || model < 1000)
            printf ("Hata!! Lutfen 4 haneli deger giriniz\n");
        else {
            if (best == 0)
                best = model;
            else if (model == best)
                count++;
            else if ( model > best){
                best = model;
                count = 1;
            }
            temp++;
        }
    }
    printf("-------------------------------------\n");
    printf ("En yeni model %d ", best);
    printf ("( Toplam %d tane giris yapti )\n", count);

    return 0;
}
