#include <stdio.h>

int main() {
    int sayi , i , top;
    top = 0;

    for (sayi=9999; sayi > 999; sayi--){
        for ( i = 1; i<sayi; i++){
            if (sayi%i == 0)
                top+=i;
        }

        if (top>sayi && sayi%2){
            printf("Aranilan sayi : %d", sayi);
            break;
        }
        top=0;
    }
    return 0;
}
