#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    FILE *fp2;
    char *add;
    char address[20];
    char newaddress[20] = "yedek.bak";
    char dizi[500];
    char ch;
    printf("Dosya adini giriniz : ");
    scanf("%[^\n]", address);
    fp = fopen(address, "r");
    fp2 = fopen(newaddress, "w");
    fseek(fp, 0L, 2);
    int num = ftell(fp);
    fseek(fp, -1L, SEEK_END);
    ch = fgetc(fp);
    int i = 1;
    while (i <= num)
    {
        i++;
        fputc(ch, fp2);
        fseek(fp, -i * 1L, SEEK_END);
        ch = fgetc(fp);
    }

    printf("Dosyanin tersi olan \"yedek.bak\" olusturuldu. \n", address, newaddress);
    fclose(fp);
    fclose(fp2);
    return 0;
}