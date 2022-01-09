#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //gerekli degiskenler ve file pointerleri programa tanimliyoruz
    FILE *fileP;
    FILE *filePtr;
    char yemek[10][30];
    int kal[10];
    char yemekSiparis[10][30];
    double adet[10];
    int size;
    double total = 0;
    //iki dosyayi acip, bos olmadiklarini kontrol ederiz
    fileP = fopen("kalori.txt", "r");
    if (fileP == NULL)
    {
        printf("Dosya bulunmadi\n");
        return 1;
    }
    filePtr = fopen("siparis.txt", "r");
    if (filePtr == NULL)
    {
        printf("Dosya bulunmadi\n");
        return 1;
    }
    //file pointer ile kalori dosyanin datalarini aliriz
    for (int i = 0; i < 10; i++)
    {
        fscanf(fileP, "%s %d", yemek[i], &kal[i]);
    }
    //file pointer ile siparis dosyasindan verileri aliriz
    //feof fonksiyonu ile dizilerin kac elemana sahip olduklarini buluruz
    for (int i = 0; i < 10; i++)
    {
        fscanf(filePtr, "%s %lf", yemekSiparis[i], &adet[i]);
        size = i;
        if (feof(filePtr))
            break;
    }
    //toplam kaloriyi hesaplama donguleri
    for(int i = 0; i <= size; i++)
    {
        for(int k = 0; k < 10; k++)
        {
            if (strcmp(yemekSiparis[i], yemek[k]) == 0)//iki diziyi kiyaslama fonksiyonu
            {
                total += (adet[i] * kal[k]);
                break;//iki esit diziyi bulduktan sonra ic donguden cikip, dis donguye devem eder.
            }
        }
    }
    //ciktiyi ekrana yazdiririz
    printf("\nToplam Kalori :  %0.2lf\n", total);
    //actiginiz dosyalarin kaptmasini unutmiyoruz :)
    fclose(fileP);
    fclose(filePtr);
    return 0;
}
