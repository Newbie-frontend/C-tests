#include <stdio.h>

int main () {
    int Code = 0, red = 0, green = 0, yellow = 0, black = 0;
    while ( Code != 111 )
    {
        printf("Kod giriniz (1,2,3,4 ya da cikmak icin 111): ");
        scanf("%d", &Code);
        if (Code != 1 && Code != 2 && Code != 3 && Code != 4 && Code != 111){
            printf("Hata!! lutfen gecerli bir kod giriniz\n");
        }
        else if (Code == 1)
            red++;
        else if (Code == 2)
            green++;
        else if (Code == 3)
            yellow++;
        else if (Code == 4)
            black++;
    }
    printf ("\n%d kirmizi, %d yesil, %d sari, %d siyah oje satilmistir.\n", red, green, yellow, black);

    return 0;
}
