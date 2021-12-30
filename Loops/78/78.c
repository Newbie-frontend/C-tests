#include <stdio.h>

int main (){
    int i, j, k;
    for (i = 0; i <= 9; i += 2)
    {
        for (j = ( 9 - i )/2; j > 0; j--)
        {
            printf(" ");
        }
        for (k = 0; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}
