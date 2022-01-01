#include <stdio.h>

void toggleChar(char *ptr) {
    for (int i = 0; *(ptr + i) != '\0'; i++)
    {
        if (*(ptr + i) <= 'Z' && *(ptr + i)>= 'A')
            *(ptr + i) += 32;
        else if (*(ptr + i) >= 'a' && *(ptr + i)<= 'z')
            *(ptr + i) -= 32;
    }
    
}
int main() {
    char str[100];

    printf("Enter a String : ");
    scanf("%[^\n]", str);

    toggleChar(str);

    printf("Toggle characters : %s \n", str);
}