#ifndef KITAP_H
#define KITAP_H
class Kitap
{
private:
    char ad[100];
    char yazar[50];
    char tur[20];
    int sayfa;
    double fiyat;
    int adet;

public:
    Kitap(char const[], char const[], char const[], int = 10);
    void bilgiver();
    void sayfaDuzelt(int);
    void fiyatDuzelt(double);
    void zamYap(int = 10);
    int adetAzalt(int = 1);
    int adetArttir(int = 1);
    bool ayniMi(Kitap);
    void ekle(Kitap);
    void turDegistir(char[]);
};

#endif