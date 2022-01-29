#include <stdio.h>

void zinetSayisiniBul(double num, double ziynet, int *a, int *b, int *c, double *d)
{
    *a = (int)(num / ziynet);
    *b = (int)((num - (*a) * ziynet) / (ziynet / 2));
    *c = (int)((num - (*a) * ziynet - (*b) * (ziynet / 2)) / (ziynet / 4));
    *d = num - (*a) * ziynet - (*b) * (ziynet / 2) - (*c) * (ziynet / 4);
}

int main()
{
    double para = -1, ziynet;
    int tam, yarim, ceyrek;
    double  geriKalan;
    while (para < 0)
    {
        printf("Para miktarinizi giriniz (TL): ");
        scanf("%lf", &para);
        printf("Tam ziynet altini satis degerini giriniz : ");
        scanf("%lf", &ziynet);
    }
    zinetSayisiniBul(para, ziynet, &tam, &yarim, &ceyrek, &geriKalan);
    printf("-----------------------------\n");
    printf("Elinizdeki para ile \n");
    printf("%d adet tam, %d adet yarim ve %d adet de ceyrek altin alabilirsiniz.\n", tam, yarim, ceyrek);
    printf("Kalan paraniz : %0.2lf \n", geriKalan);

    return 0;
}