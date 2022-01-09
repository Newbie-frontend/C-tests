#include <stdio.h>

// dizinin en buyuk elemanini bulmak icin bir fonksiyon yazariz
int enbuyuk(int [], int );//fonksiyon prototipi
// dizinin en kucuk elemanini bulan fonksiyonu yazariz
int enkucuk(int [], int );

int main()
{
    //iki file pointer tanimliyoruz;
    //biri dosyayi almak icin(read) digeri sonuclari gondermek icin(write) 
    FILE *fp;
    FILE *fp2;
    //dosya isimlerini kullanciden almak icin 2 dizi programa tanitiyoruz
    char puan[100];
    char sonuc[100];
    // printf("puanlarin tutudugu dosyanin adini giriniz : ");
    // scanf("%s", puan);
    // printf("Sonuclar hangi dosyaya kayedilsin : ");
    // scanf("%s", sonuc);
    //iki dosyayi acip, bos olmadiklarini kontrol ederiz
    fp = fopen("puanlar.txt", "r");
    fp2 = fopen("sonuc.txt", "w");
    if (fp == NULL)
    {
        printf("Unable to open file \"puanlar.txt\"\n");
        return 1;//sorunlu ciktigini anlamak icin 1 ile return yapariz
    }
    if (fp2 == NULL)
    {
        printf("Unable to open file \"sonuc.txt\"\n");
        return 1;
    }
    //dosyadan aldigimiz degerleri atmak icin ve 
    //islemle elde edecegimiz degerleri tutmak icin gereken degiskenleri belirliyoruz
    int table[8][10];
    int aileToplami[10];
    int peynirToplami[8];
    //read yaptigimiz dosyadan datalari ic ice dongulerle aliyoruz
    //ayni zamanda en cok begenilen peynir sayisini bulmak icin 
    //her satir ve sutunu toplayip belirledigimiz dizilere atiyoruz
    for (int i = 0; i < 8; i++)
    {
        int total = 0;
        for (int j = 0; j < 10; j++)
        {
            fscanf(fp, "%d ", &table[i][j]);
            total += table[i][j];
        }
        peynirToplami[i] = total;
    }
    //enbuyuk ve enkucuk fonksiyonlarla 2 diziden istedigimiz peynir ve aile numaralarini buluruz
    for (int i = 0; i < 10; i++)
    {
        int total = 0;
        for (int j = 0; j < 8; j++)
        {
            total += table[j][i];
        }
        aileToplami[i] = total;
    }
    //buldugumuz degerleri fprintf fonksiyonu ile sonuc dosyasina gondeririz
    fprintf(fp2, "En cok begenilen urun no : %d\n", enbuyuk(peynirToplami, 8));
    fprintf(fp2, "Enaz begenen aile no : %d", enkucuk(aileToplami, 10));
    printf("---------------------------------------------------\n");
    printf("sonuc.txt dosyasi basarili bir sekilde olusturuldu\n");
    //Ram bellegi isgal etmemek icin mutlaka dosyayi kapatiriz
    fclose(fp);
    fclose(fp2);
    return 0;
}

int enbuyuk(int a[], int n)
{
    int temp;
    int count;
    temp = a[0]; 
    // dizinin ilk elemanini temp degiskenine atip diger elemanlari onunla kiyaslariz
    for (int i = 1; i < n; i++)
    {
        if (a[i] > temp)
        {
            temp = a[i];
            count = i; // en buyuk elemanin indisini count degiskene atariz
        }
    }
    return count + 1; 
    // indisi degil, dizinin kacinci elemani oldugunu return ederiz
}
int enkucuk(int a[], int n)
{
    int temp;
    int count;
    temp = a[0];
    // dizinin ilk elemanini temp degiskenine atip diger elemanlari onunla kiyaslariz
    for (int i = 1; i < n; i++)
    {
        if (a[i] < temp)
        {
            temp = a[i];
            count = i;//en kucuk elemanin indisini count degiskene atariz
        }
    }
    return count + 1;// dizinin kacinci elemani oldugunu return ederiz
}