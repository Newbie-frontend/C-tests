#include <stdio.h>

int main() {
    int i;
    float a = 1, chance;
    for (i = 1; chance < 0.90; i++)
    {
        a *= (367-i)/366.0;
        chance = 1 - a;
    }
    printf("\nOlasilik 0.9 daha yuksek olabilmek icin kisi sayisi : %d \n", i);
    return 0;
}
