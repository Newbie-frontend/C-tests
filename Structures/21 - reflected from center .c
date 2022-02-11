#include <stdio.h>

typedef struct Dortgen
{
    int solUstX;
    int solUstY;
    int sagAltX;
    int sagAltY;
} Dortgen;

void simetrikBul(Dortgen a, Dortgen *temp)
{
    temp->solUstX = a.sagAltX * (-1);
    temp->solUstY = a.sagAltY * (-1);
    temp->sagAltX = a.solUstX * (-1);
    temp->sagAltY = a.solUstY * (-1);
}

int main(int argc, char const *argv[])
{
    Dortgen a, b;
    printf("Orijinalin bilgilerini giriniz (sol ust, sag alt): ");
    scanf("%d %d %d %d", &a.solUstX, &a.solUstY, &a.sagAltX, &a.sagAltY);

    simetrikBul(a, &b);
    printf("--------------------------------\n");
    printf("Simetrik dikdortgen bilgileri : \n");
    printf("sol ust x, y = %d, %d \n", b.solUstX, b.solUstY);
    printf("sag alt x, y = %d, %d \n", b.sagAltX, b.sagAltY);
    return 0;
}
