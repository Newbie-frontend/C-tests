#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp, *fp2;
    char email[30];
    char temp[30];
    int konum;
    int konum2;
    int x;
    int m = 0;
    fp = fopen("akademik.txt", "r");
    fp2 = fopen("eposta.txt", "w");
    konum = ftell(fp);
    fgets(email, 50, fp);
    konum2 = ftell(fp);
    while (!feof(fp))
    {
        fseek(fp, 0L, 0);
        x = ftell(fp);
        while (x < konum)
        {
            fgets(temp, 50, fp);
            x = ftell(fp);
            if (strcmp(email, temp) == 0)
            {
                m = 1;
                break;
            }
        }
        if (m == 0)
            fputs(email, fp2);
        m = 0;
        fseek(fp, konum2 * 1L, 0);
        konum = ftell(fp);
        fgets(email, 50, fp);
        konum2 = ftell(fp);
    }
    fseek(fp, 0L, 0); // for last element :-( it is a pain in the a.. to check it again 
    x = ftell(fp);    // because when we read the last element it 
    while (x < konum)
    {
        fgets(temp, 50, fp);
        x = ftell(fp);
        if (strcmp(email, temp) == 0)
        {
            m = 1;
            break;
        }
    }
    if (m == 0)
        fputs(email, fp2);

    printf("Dosyalar basarili bir sekilde olusturuldu.\n");
    fclose(fp);
    fclose(fp2);
    return 0;
}
