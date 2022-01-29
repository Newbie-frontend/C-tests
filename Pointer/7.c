#include <stdio.h>

void ayristir(int num, int *a, int *b, int *c)
{
    *a = num /365;
    *b = (num - (*a)*365)/30;
    *c = num - (*a)*365 - (*b)*30; 
}

int main()
{
    int num = -1;
    int yil, ay, gun;
    while (num < 0)
    {
        printf("Sayiyi giriniz = ");
        scanf("%d", &num);
    }
    ayristir(num, &yil, &ay, &gun);
    printf("-----------------------------\n");
    printf("Bu sure  %d  yil,  %d  ay,  %d  gun eder \n", yil, ay, gun);

    return 0;
}