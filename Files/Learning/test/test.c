#include <stdio.h>

struct musteriler
{
    int sira;
    char ad[15];
    char soyad[10];
    double borc;
};

int main(int argc, char const *argv[])
{
    int i;
    struct musteriler boskayit = {1372, "Hossein", "Razeghian", 3.47};
    FILE *cfPtr;

    if ((cfPtr = fopen("musteri.txt", "w")) == NULL)
        printf("Dosya olusturulmadi.\n");
    else
    {
        for (size_t i = 1; i <= 100; i++)
            fwrite(&boskayit, sizeof(struct musteriler), 1, cfPtr);
        fclose(cfPtr);
    }

    return 0;
}
