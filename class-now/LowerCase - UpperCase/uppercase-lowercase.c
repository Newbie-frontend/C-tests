#include <stdio.h>
#include <string.h>
#include <math.h>

int lowerCase(char);

int lowerCase(char a){
    if ( a >= 'a' && a <= 'z')
        return 1;
    else
        return 0;
}
int upperCase(char a){
    if ( a >= 'A' && a <= 'Z')
        return 1;
    else
        return 0;
}
int toUpperCase(char a){
    a = a - 32 ;
    return a;
}

int main() {
    char str[100];
    printf("Enter a character : ");
    scanf("%s", &str);
    for (int i=0; i < strlen(str); i++ ){
        if (lowerCase(str[i])){
            str[i] = toUpperCase(str[i]);
        }
    }
    printf("The upperCase word is : %s", str);
    return 0;
}
