#include <stdio.h>

void bileklikCoz(int num, char *pc, int *ph, int *ps){
    int a;
    a = num /10000;
    if (a == 1)
    {
        *pc = 'E';
    }else if (a == 2)
    {
        *pc = 'K';
    } 
    *ph = (num % 10000)/100;
    *ps =(num %100);
    
}

int main (){
    int num;
    char cinsiyet;
    int hafta;
    int siraNumarasi;
    printf("Sayiyi giriniz : ");
    scanf("%d", &num);
    bileklikCoz(num, &cinsiyet, &hafta, &siraNumarasi);
    printf("Cinsiyet : %c\n", cinsiyet);
    printf("Hafta : %d\n", hafta);
    printf("Sira numarasi : %d\n", siraNumarasi);

    return 0;
}