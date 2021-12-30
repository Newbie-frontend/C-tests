#include <stdio.h>

int OBEB(int a, int b)
{
    if (a % b == 0)
        return b; 
    OBEB(b, a%b);
}

int main()
{
    int first, second;
    printf("Iki sayi giriniz :");
    scanf("%d %d", &first, &second);
    printf("\nOBEB : %d \n", OBEB(first, second));

    return 0;
}