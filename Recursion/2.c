#include <stdio.h>

int Power(int a, int b)
{
    if (b == 0)
        return 1; 
    return Power(a, b-1) * a;
}

int main()
{
    int taban, ust;
    printf("Ilk Olarak Taban Ve Ondan Sonra Ustu Giriniz :");
    scanf("%d %d", &taban, &ust);
    printf("\n%d \n", Power(taban, ust));

    return 0;
}