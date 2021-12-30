
#include <stdio.h>

int main() {
    int count = 0, tekBasamakli = 0, ikiBasamakli = 0, num = 0;
    while (num < 100){
        printf("Sayi : ");
        scanf("%d", &num);
        if (num > 10 && num < 100)
            ikiBasamakli++;
        else if (num > 0 && num < 100)
            tekBasamakli++;
        count++;
    }

    printf("\nGirilen %d sayinin %d tanesi tek basamakli, %d tanesi iki basamaklidir.\n", count-1, tekBasamakli, ikiBasamakli);
    return 0;
}
