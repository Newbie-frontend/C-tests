#ifndef TAKIM_H
#define TAKIM_H
class Takim
{
private:
    char ad[50];
    int toplamMac;
    int attigiGol[34];
    int yedigiGol[34];

public:
    Takim(char const[]);
    int getA();
    int getY();
    void bilgiVer();
    void macEkle(int, int);
    double getMG();
    Takim iyiOlaniBul(Takim);
    bool ayniMi(Takim);
};
#endif