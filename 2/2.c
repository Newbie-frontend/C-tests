#include <stdio.h>

int main() {
    int n;
    float toplam = 0;
    printf ("Formuldaki n sayisini Giriniz : ");
    scanf ("%d", &n);
    for (float i = 1; i <= n; i++)
        toplam += (i+1)/i;
    printf("Sonuc : %.2lf\n", toplam);

    return 0;
}
