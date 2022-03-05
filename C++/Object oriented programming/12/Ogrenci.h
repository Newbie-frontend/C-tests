#ifndef OGRENGI_H
#define OGRENGI_H
class Ogrenci
{
private:
    char ad[50];
    char num[20];
    double sonNot[100];
    int akts[100];

public:
    Ogrenci(char const[], char const[]);
    int getAKTS();
    double getGNO();
    void bilgiVer();
    void dersEkle(int, double);
    int getDersSayisi();
    Ogrenci iyiOlaniBul(Ogrenci);
    bool ayniMi(Ogrenci);
};
#endif