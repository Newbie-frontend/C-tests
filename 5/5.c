#include <stdio.h>
#include <locale.h>
#include <windows.h>


int main() {
    int  start, end, count = 0;
    printf("Baslangic ve bitis degerini giriniz : ");
    scanf("%d %d", &start, &end);
    printf("-------------------------------------\n");
    printf ("Sayilar sunlardir : ");
    for (int i = start; i <= end; i++)
    {
        if (i%2 == 0){
            printf("%d  ",i);
            count++;
        }
    }
    printf ("(Toplam %d adet)\n", count);

    return 0;
}
