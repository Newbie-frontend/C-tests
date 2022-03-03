#ifndef OYUNCAK_H
#define OYUNCAK_H
class Oyuncak
{
private:
    char ad[100];
    char imalatci[50];
    int yas;
    int renk;
    double fiyat;
    int adet;

public:
    Oyuncak(char const[], char const[], int, int, int = 10);
    void bilgiver();
    void yasDuzelt(int);
    void fiyatDuzelt(double);
    void zamYap(int = 10);
    int adetArttir(int = 1);
    bool ayniMi(Oyuncak);
    void ekle(Oyuncak);
};
#endif