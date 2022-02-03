#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];

    printf("Dizgiyi giriniz : ");
    scanf("%[^\n]", str);
    printf("---------------------------------\n");
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'ı' || str[i] == 'o' || str[i] == 'u')
        {
            for (int j = i + 1; str[j] != '\0'; j++)
                if (str[j] == 'e' || str[j] == 'i' || str[j] == 'ö' || str[j] == 'ü')
                {
                    printf("Buyuk Sesli Uyumuna Uymaz");
                    count = 1;
                    break;
                }
            if (count == 1)
                break;
        }
        else if (str[i] == 'e' || str[i] == 'i' || str[i] == 'ö' || str[i] == 'ü')
        {
            for (int j = i + 1; str[j] != '\0'; j++)
                if (str[j] == 'a' || str[j] == 'ı' || str[j] == 'o' || str[j] == 'u')
                {
                    printf("Buyuk Sesli Uyumuna Uymaz");
                    count = 1;
                    break;
                }
            if (count == 1)
                break;
        }
    }
    if (count == 0)
        printf("Buyuk Sesli Uyumuna Uyar");
    

    return 0;
}
