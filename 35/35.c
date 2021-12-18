
#include <stdio.h>
#include <math.h>

int main() {
    int num, num2, a, b, c, reverse = 0, left = 1, right = 1, count = 0;
    printf("\nSayilar ");
    for (int i = 9999; i >= 1000; i--)
    {
        num = i;
        for (int h = 0; h < 2; h++)
        {
            a = num%100;
            num /= 100;
            left *= a;
        }
        num2 = i;
        for (int j = 0; j < 2; j++)
        {
            b = num2%100;
            num2 /= 100;
            for (int k = 1; k >=0; k--)
            {
                c = b%10;
                b /= 10;
                reverse += (c*pow(10, k));
            }
            right *= reverse;
            reverse = 0;
        }
        if (left == right){
            printf("%d, ", i);
            count++;
        }
        left = 1; right = 1;
    }
    printf("Toplam = %d adet", count);

    return 0;
}
