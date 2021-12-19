#include <stdio.h>
int main() {
    int num, light = 0, middle = 0, heavy = 0;
    float total = 0;
    while (1)
    {
        printf("Kilo giriniz:  ");
        scanf("%d", &num);
        if (num <0)
        {
            printf("Kilo Yanlis, Tekrar deneyin. \n");
            continue;
        }else if (num == 0)
        {
            printf ("--------------------------------\n");
            printf ("Toplam %d adet sporcu girilmistir \n", light+middle+heavy);
            printf ("%d hafif, %d orta ve %d agir siklet vardir \n", light, middle, heavy);
            printf ("Genel ortalama %0.2f dir \n", total/(light+middle+heavy));
            break;
        }else if (num < 50)
        {
            light++;
        }else if (num < 70)
        {
            middle++;
        }else
            heavy++;
        total += num;

    }

    return 0;
}
