
#include <stdio.h>
#include <math.h>

int main() {
    float  t = 1, n, x;
    printf("X'i giriniz : ");
    scanf("%f", &x);
    printf("N'i giriniz : ");
    scanf("%f", &n);
    for (int i = 1; i <= n; i++)
        t += i%2 ? (-(pow(x, i)))/i : (pow(x, i))/i;
    printf("\nSonuc : %lf\n", t);

    return 0;
}
