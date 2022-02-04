#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int x;
    char *token;
    int total;
    int a, b;

    printf("Dogru denklemini giriniz : ");
    scanf("%[^\n]", str);
    printf("X degerini giriniz : ");
    scanf("%d", &x);
    token = strtok(str, "=");
    token = strtok(NULL, "x");
    a = atoi(token);
    token = strtok(NULL, " ");
    b = atoi(token);
    total = a * x + b;
    printf("---------------------------------- \n");
    printf("y = %d \n", total);
  
    return 0;
}
