#include <stdio.h>

void degistir (int , int);
int main(){
    int a = 5, b = 7;
    printf("a = %d, b = %d \n", a, b);
    degistir(a,b);
    printf("a = %d , b = %d", a, b);
    return 0;
}
void degistir(int x , int y){
    int yedek;
    yedek = x;
    x=y;
    y = yedek;
}
