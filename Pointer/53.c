
#include <stdio.h>
#include <math.h>

void veri_al(char *operator, float * operand)
{
    scanf(" %c%f", operator, operand);
}
void islem_yap(float *num, float num2, char operator, int i)
{
    if (*num == 0 && i == 0)
        *num = num2;
    else if (operator== '+')
        *num += num2;
    else if (operator== '-')
        *num -= num2;
    else if (operator== '/')
        *num /= num2;
    else if (operator== '*')
        *num *= num2;
    else if (operator== '^')
        *num = pow(*num, num2);
    else if (operator== 'm')
        *num = (int)*num % (int)num2;
}

int main()
{
    char operator;
    float operand;
    float depo = 0;
    printf("Operator ve operandi giriniz \n");
    for (int i = 0; i != -1; i++)
    {
        veri_al(&operator, & operand);

        if (operator== 'q')
            break;
        islem_yap(&depo, operand, operator, i);
        printf("Sonuc = %0.1f \n", depo);
    }

    return 0;
}
