#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char str[3][200];
    //  = {"Korkma sonmez bu safaklarda yuzen alsancak",
    //                      "sonmeden yurdumun ustunde tuten en son ocak",
    //                       "O benim milletimin yildizidir parlayacak"}
    char dizgi[20];
    int count = 0;
    char *x;
    printf("Cumleleri giriniz: \n");
    for (int i = 0; i < 3; i++)
        scanf(" %[^\n]", str[i]);
    printf("Aranacak dizgi: ");
    scanf("%s", dizgi);
    printf("------------------------------------- \n");
    for (int i = 0; i < 3; i++)
    {
        x = strstr(str[i], dizgi);
        while (x != NULL)
        {
            count++;
            x = strstr(x + 1, dizgi);
        }
    }

    printf("Girilen cumleler icerisinde %d adet \"%s\" vardir \n", count, dizgi);

    return 0;
}
