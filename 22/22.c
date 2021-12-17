#include <stdio.h>

int main () {
    int Code = 0;
    float Sale = 0;
    printf("Kalemlerin urun kodlarini girin (Durdurmak icin 111): \n");
    while ( Code != 111 )
    {
        scanf("%d", &Code);
        switch (Code)
        {
            case 11:
                Sale += 1.5;
                break;
            case 12:
                Sale += 2.5;
                break;
            case 13:
                Sale += 3;
                break;
            case 14:
                Sale += 4.5;
                break;
            case 15:
                Sale += 5;
                break;
            case 111:
                break;
            default:
                printf("Hata!! lutfen gecerli bir kod girin\n");
                break;
        }
    }
    printf ("\ngun sonu satis kazanci : %.1f TL dir.\n", Sale);

    return 0;
}
