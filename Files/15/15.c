#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *fp, *fp2, *fp3;
    int num;
    char ch;
    fp = fopen("d.txt", "r");
    fp2 = fopen("kodlar.txt", "r");
    fp3 = fopen("orjinal.txt", "w");
    while (!feof(fp2))
    {
        fscanf(fp2, "%d ", &num);
        fseek(fp, (num-1) * 1L, 0);
        ch = fgetc(fp);
        fputc(ch, fp3);
    }
    printf("Dosyalar basarili bir sekilde olusturuldu.\n");
    fclose(fp);
    fclose(fp2);
    fclose(fp3);
    return 0;
}