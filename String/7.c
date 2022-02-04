#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];

    printf("Dizgiyi giriniz : ");
    scanf("%[^\n]", str);
    printf("---------------------------------- \n");
    int length = strlen(str);
    int count = 0;
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            printf("Palindrome degildir");
            count++;
            break;
        }
    }
    if (count == 0)
        printf("Palindrome dur");
    

    return 0;
}
