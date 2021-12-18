
#include <stdio.h>

int main() {
    int num, biggest, second;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d. sayi = ", i);
        scanf("%d", &num);
        if (i == 1)
            biggest = num;
        else if (i == 2 && num > biggest)
        {
            second = biggest;
            biggest = num;
        }
        else if (i == 2 && num < biggest)
            second = num;
        else if (num > biggest)
        {
            second = biggest;
            biggest = num;
        }
        else if (num > second)
            second = num;
    }
    printf("----------------------------------------\n");
    printf("En buyuk deger = %d\n", biggest);
    printf("Ikinci en buyuk deger = %d\n", second);


    return 0;
}
