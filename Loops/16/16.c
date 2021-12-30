
#include <stdio.h>

int main() {
    int num;
    printf("Bir kenar uzunlugu giriniz : ");
    scanf("%d", &num);
    printf("------------------------------------------\n");
    if ( num <= 20 && num >= 1)
    {
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j <= i ; j++)
            {
                printf("* ");
            }
            printf("\n");
        }

        return 0;
    }      
}
 