#include <stdio.h>
int main () {
    int first, second, a;
    do
    {
        printf("birinci sayiyi giriniz : ");
        scanf("%d", &first);
        printf("ikinci sayiyi giriniz : ");
        scanf("%d", &second);
        if (first < 0 || second < 0)
            printf("yanlis!!! lutfen sayilarin her ikisini de pozitif olarak giriniz\n");
    } while (first < 0 || second < 0);
    while (1) {
        if (first%second == 0 )
        {
            printf("OBEB : %d \n", second);
            break;
        }else
        {
            a = first%second;
            first = second;
            second = a;
        }
    }

    return 0;
}
