#ifndef AJAN_H
#define AJAN_H
class Ajan
{
private:
    char ad[100];
    char takmaAd[50];
    char tur[20];
    int seviye;
    double performans;
    int girisYili;
    int gorevSayisi;

public:
    Ajan(char const[], char const[], char const[], double = 1.5);
    void bilgiver();
    void seviyeDuzelt(int);
    void girisYiliDuzelt(int);
    void turDegistir(char const []);
    void GorevSayisiArttir(int);
    void performansArttir(double);
    bool ayniMi(Ajan);
    Ajan iyiOlaniBul(Ajan);
};
#endif