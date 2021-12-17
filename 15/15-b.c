
#include <stdio.h>

int main() {
    int count = 0;
    printf("1 ile 20 arasindaki asal sayilar \n");//Asal sayi sadece kendisine ve 1'e bolunebilir. 1 asal degil.
    printf("------------------------------------\n");
    for (int i = 1; i <= 20; i++)
    {
        for (int j = 1; j <= 20; j++)
        {
            if (i%j == 0)
                count++;
        }
        if (count == 2)
            printf("%d  ", i);
        count = 0;
    }
    return 0;
}
