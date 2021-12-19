#include <stdio.h>
#include <math.h>
int main() {
    int Age, biggest = 0, lowest = 100, total = 0, count = 0;
    while (1)
    {
        printf("yasi giriniz (Durdurmak icin 0) : ");
        scanf("%d", &Age);
        if (Age > 100 || Age < 0){
            printf("Hata!!! lutfen yas degerine dikkat ediniz \n");
            continue;
        }
        else if (Age == 0)
            break;
        if (Age > biggest)
            biggest = Age;
        if (Age < lowest)
            lowest = Age;
        total += Age;
        count++;
    }
    printf("---------------------------------------------------\n");
    printf("Toplam %d tane izleyici giris yapti \n", count);
    printf(" Ortalama = %d, Kirpilmis ortalama = %d", total/count, (total-(biggest+lowest))/(count-2));

    return 0;
}
