#include <stdio.h>
#include <locale.h>
#include <windows.h>


int main() {
    int  num, count = 0;
    float total = 0, Average = 0;
    printf("Sayilari giriniz (10 adet) : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        if (num%2){
            total += num;
            count++;
        }
    }
    Average = total / count;
    printf("-------------------------------------\n");
    printf ("girilen %d adet tek sayinin aritmetik ortalamasi : %.1lf\n", count, Average);
    return 0;
}
