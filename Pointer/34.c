#include <stdio.h>
#include <math.h>

void simetrik(char, int *, int *);

int main()
{
    char eksen;
    int x, y;
    printf("Hangi eksene gore simetrik bulunacak \n");
    printf(" (origin icin o, yatay eksen icin x, dusey eksen icin y giriniz) : ");
    scanf("%c", &eksen);
    printf("Noktanin koordinatlarini giriniz (x, y) : ");
    scanf("%d %d", &x, &y);
    printf("-----------------------------------------------\n");
    simetrik(eksen, &x, &y);
    printf("Verilen noktanin simetrigi %d ve %d dir.", x, y);
    return 0;
}
void simetrik(char eksen, int *x, int *y)
{
    if (eksen == 'o')
    {
        (*x) *= (-1);
        (*y) *= (-1);
    }
    else if (eksen == 'x')
        (*y) *= (-1);
    else if (eksen == 'y')
        (*x) *= (-1);
    else
        printf("Ekseni dogru girmediniz! \n");
    
}