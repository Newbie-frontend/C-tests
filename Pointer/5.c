#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void cevir(int num, char CY[], int *a, int *b, int *c, int *d)
{
    for (int i = 0; i < num; i++)
    {
        int temp;
        if (CY[0] == 'D')
        {
            temp = *d;
            *d = *c;
            *c = *b;
            *b = *a;
            *a = temp;
        }
        else if (CY[0] == 'T')
        {
            temp = *a;
            *a = *b;
            *b = *c;
            *c = *d;
            *d = temp;
        }
        else
        {
            printf("Cevirme Yonunu dogru gir be kardesim! \n");
            break;
        }
    }
}

int main()
{
    int a, b, c, d, num;
    char CY[1];
    
    printf("4 tamsayi giriniz: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("Cevirme yonu (saat yonu icin D, tersi icin T) : ");
    scanf("%s", CY);
    printf("Girilen yonde kac kere cevrilecek : ");
    scanf("%d", &num);
    printf("Sayilarin verilmeden onceki halleri   : a\tb\tc\td \n");
    printf("                                         %d\t%d\t%d\t%d \n", a, b, c, d);
    cevir(num, CY, &a, &b, &c, &d);
    printf("Sayilarin verildikten sonraki halleri : a\tb\tc\td \n");
    printf("                                         %d\t%d\t%d\t%d \n", a, b, c, d);

    return 0;
}