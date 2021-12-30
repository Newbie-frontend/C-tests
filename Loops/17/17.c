
#include <stdio.h>

int main() {
    int num, total = 0;
    char Sex;
    printf("Maymunun cinsitetini giriniz (Erkek E/e, Disi D/d) : ");
    scanf("%c", &Sex);
    printf("Maymun kafese kac kez girdi : ");
    scanf("%d", &num);
    printf("------------------------------------------\n");
    for (int i = 1; i <= num; i++)
    {
        if (i < 5)
            total += i;
        else
            total += ((total - i)/2)+1;
        if (Sex == 'D' || Sex == 'd')
            printf("%d. girisinde toplamda %d muz yemis oldu\n", i, total);
        else if (Sex == 'E' || Sex == 'e')
            printf("%d. girisinde toplamda %d muz yemis oldu\n", i, 2*total);
        else {
            printf("Cinsiyeti dogru girmediniz\n");
            break;
        }
    }

    return 0;
}
