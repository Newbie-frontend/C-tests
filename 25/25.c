#include <stdio.h>

int main()
{
    int guest, same = 0, older = 0, younger = 0, person = 1, total = 0, Average;
    printf("\nKonugun yasini giriniz : ");
    scanf("%d", &guest);
    for(; person != 0;){
        printf("Talibin yasini giriniz : ");
        scanf("%d", &person);
        total += person;
        if (person == 0)
            break;
        else if (person == guest)
            same++;
        else if (person > guest)
            older++;
        else
            younger++;
    }
    Average = total /(same + older + younger);
    printf("\nkonuktan daha yasli taliplerin sayisi = %d",  older);
    printf("\nkonuktan daha genc taliplerin sayisi = %d",  younger);
    printf("\nkonugun yasina denk taliplerin sayisi = %d",  same);
    printf("\ntaliplerin yas ortalamsi = %d\n", Average);

    return 0;
}
