
#include <stdio.h>

int main() {
    int total = 0;
    for (int i = 10000; i >= 1; i--)
    {
        for (int j = 1; j < i; j++)
        {
            if ( i%j == 0 )
                total += j;
        }
        if (total == i){
            printf("\nAranilan sayi : %d \n", i);
            break;
        }
        total = 0;
    }
    printf("\n");

    return 0;
}
