#include <stdio.h>

void ilerideOlaniBul(int bGun, int bAy, int bYil, int iGun, int iAy, int iYil, int *gun, int *ay, int *yil)
{
    int temp;
    if (iYil > bYil)
        temp = 2;
    else if (iYil < bYil)
        temp = 1;
    else
    {
        if (iAy > bAy)
            temp = 2;
        else if (iAy < bAy)
            temp = 1;
        else
        {
            if (iGun > bGun)
                temp = 2;
            else if (iGun < bGun)
                temp = 1;
            else
                temp = 1;
        }
    }
    if (temp == 1)
    {
        *gun = bGun;
        *ay = bAy;
        *yil = bYil;
    }
    else if (temp == 2)
    {
        *gun = iGun;
        *ay = iAy;
        *yil = iYil;
    }
    
}

int main()
{
    int bGun, bAy, bYil, iGun, iAy, iYil;
    int gun, ay, yil;

    printf("Birinci tarihi giriniz : ");
    scanf("%d %d %d", &bGun, &bAy, &bYil);
    printf("Ikinci tarihi giriniz : ");
    scanf("%d %d %d", &iGun, &iAy, &iYil);

    ilerideOlaniBul(bGun, bAy, bYil, iGun, iAy, iYil, &gun, &ay, &yil);
    printf("-----------------------------\n");
    printf("Ileride olan : %d / %d / %d \n", gun, ay, yil);

    return 0;
}