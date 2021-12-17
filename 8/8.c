
#include <stdio.h>

int main() {
    int  start = 1986, count = 0;

    printf("\nHalley yildizinin gorulebilecegi yillar :  ");
    for (int i = 0; i < 20 ; i++)
    {
        printf("%d  ", start);
        start += 75;
        if (start >= 2000 && start < 3000)
            count++;
    }
    printf ("\n\nHalley yildizi 2000'li yillarda %d kez gorulebilir\n", count);

    return 0;
}
