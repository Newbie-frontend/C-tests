#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    char sifat[5][15] = {"Bu", "Su", "O", "Bir", "Birkac"};
    char ozne[5][15] = {"adam", "cocuk", "kus", "kedi", "araba"};
    char tumlec[5][15] = {"sinif", "kapan", "orman", "cayir", "agac"};
    char tumlecEki[5][15] = {"a", "dan", "in ustunden", "in altindan", "in icinden"};
    char yuklem[5][15] = {"atladi", "kacti", "zipladi", "kostu", "dustu"};
    printf("Cumleler : \n");
    for (int i = 0; i < 20; i++)
    {
        printf("%s ", sifat[rand() % 5]);
        printf("%s ", ozne[rand() % 5]);
        printf("%s ", tumlec[rand() % 5]);
        printf("%s ", tumlecEki[rand() % 5]);
        printf("%s", yuklem[rand() % 5]);
        printf(".\n");
    }

        return 0;
}
