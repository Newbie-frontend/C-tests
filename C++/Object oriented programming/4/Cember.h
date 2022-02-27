#ifndef CEMBER_H
#define CEMBER_H

class Cember
{
private:
    double merkezx;
    double merkezy;
    double yaricap;

public:
    Cember(double a = 0, double b = 0, double c = 0);
    void yaz();
    void setMerkezXY(double, double);
    void setYaricap(double);
    double getAlan();
    double getCevre();
    double mesafe(Cember);
    bool icindeMi(Cember);
    Cember buyukOlan(Cember);
    void tegetYap(char);
};
#endif