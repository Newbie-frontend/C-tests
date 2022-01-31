#include <stdio.h>

void cevir(int *);

int main()
{
    int dizi[10];
    printf("Dizinin elemanlari : \n");
    for (int i = 0; i < 10; i++)
        scanf("%d", (dizi + i) );
    cevir(dizi);
    printf("Dizinin ters cevirilmis hali \n");
    for (int i = 0; i < 10; i++)
        printf("%d ", dizi[i]);
    return 0;
}
void cevir(int *y)
{
    int temp[10];
    for (int i = 0; i < 10; i++)
    {
        temp[9 - i] = *(y + i);
    }
    for (int i = 0; i < 10; i++)
    {
        *(y + i) = temp[i];
    }
}