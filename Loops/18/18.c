
#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;
    printf("5 adet sayi giriniz : ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    printf("\n");
    for (int i = 0; i < num1; i++)
        printf("*");
    printf("\n");
    for (int i = 0; i < num2; i++)
        printf("*");
    printf("\n");
    for (int i = 0; i < num3; i++)
        printf("*");
    printf("\n");
    for (int i = 0; i < num4; i++)
        printf("*");
    printf("\n");
    for (int i = 0; i < num5; i++)
        printf("*");
    printf("\n");

    return 0;
}
