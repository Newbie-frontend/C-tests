#include <stdio.h>

int main() {
    int num;
    float a = 1, chance;
    printf("Kisi sayisini girin :");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        a *= (367-i)/366.0;
    }
    chance = 1 - a;
    printf("Olasilik = %0.4f", chance);

    return 0;
}
