
#include <stdio.h>

void Star(int num){
    for (int i = 0; i < num; i++)
        printf("*");
    printf("\n");
}

int main() {
    int num1, num2, num3, num4, num5;
    printf("5 adet sayi giriniz : ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    printf("\n");
    Star(num1);
    Star(num2);
    Star(num3);
    Star(num4);
    Star(num5);
    
    return 0;
}
