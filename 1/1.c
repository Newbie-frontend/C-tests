#include <stdio.h>
#include <locale.h>
#include <windows.h>


int main() {
    int  yas ,enGenc = 0, count = 1;
    setlocale(LC_ALL, "Turkish");
    printf("türkçeç\n");
    system("color f9");
    while (1==1)
    {
        printf ("yasi giriniz (Durdurmak icin 0) : ");
        scanf ("%d", &yas);
        if (yas > 1000 || yas < 0)
            printf ("Hata!! Lutfen yas degerine dikkat ediniz\n");
        else if (yas == 0)
            break;
        else {
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
    printf("-------------------------------------\n");
    printf ("En genc katilimci yasi %d\n", enGenc);
    printf ("( Bu yasta toplam %d kisi giris yapti )\n", count);

    return 0;
}
