
#include <stdio.h>

int main() {
    int number[5];
    printf("5 adet sayi giriniz : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &number[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < number[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
