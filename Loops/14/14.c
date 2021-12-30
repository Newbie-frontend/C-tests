
#include <stdio.h>

int main() {
    int a, N, total = 0;
    printf("Kenar uzunlugu giriniz(a) : ");
    scanf("%d", &a);
    printf("kac tane karenin alanini istiyorsunuz(N) : ");
    scanf("%d", &N);
    printf("------------------------------------------\n");
    for (int i = 0; i < N; i++)
    {
        total += (4*a)/(pow(2, i)) ;
    }
    printf("Total alan : %d\n", total);

}
