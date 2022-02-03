#include <stdio.h>

int f(int *a, int b)
{
    *a = b * 10;
    b = *a - 10;
    return b;
}
void g( int *a){
    *a = f(a, *a);
}
int main()
{
    int a = 10;
    g(&a);
    printf("%d", a);
    return 0;
}

