#include <stdio.h>

int main() {
    int num = 1, count = 0;
    for (; num <= 15000;)
    {
       num *= 3;
       count++;
    }
    printf("\n15000 den buyuk ve 3'un kuvveti olan en kucuk tamsayi %d ve bu sayinin, 3'un %d'inci kuvvetidir.\n", num, count);

    return 0;
}
