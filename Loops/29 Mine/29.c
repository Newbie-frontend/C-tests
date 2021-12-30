#include <stdio.h>

int main() {
    int  yas ,enGenc = 0, count = 1;// deyisgenleri belirliyoruz
    while (1) // sonsuz dongu yazip, sart ve break ile cikiyoruz
    {
        printf ("yasi giriniz (Durdurmak icin 0) : ");
        scanf ("%d", &yas);
        if (yas > 1000 || yas < 0)//sayiyi kontrol ediyoruz
            printf ("Hata!! Lutfen yas degerine dikkat ediniz\n");
        else if (yas == 0)//0 girdiginde donguden cikiyoruz
            break;
        else { // en genci bulup , kactane ondan olursa "count" degisgenine atiyoruz
            if (enGenc == 0)
                enGenc = yas;
            else if (yas == enGenc)
                count++;
            else if ( yas < enGenc){
                enGenc = yas;
                count = 1;
            }
        }
    }
    printf("-------------------------------------\n");//Verileri yadiriyoruz
    printf ("En genc katilimci yasi %d\n", enGenc);
    printf ("( Bu yasta toplam %d kisi giris yapti )\n", count);

    return 0;
}
