#ifndef DORTGEN_H
#define DORTGEN_H

class Dortgen
{
private:
    double solx;
    double soly;
    double sagx;
    double sagy;

public:
    Dortgen(double a = 0, double b = 0, double c = 0, double d = 0);
    void yaz();
    void setSolUst(double, double);
    void setSagAlt(double, double);
    double getBoy();
    double getEn();
    double getAlan();
    double getCevre();
    Dortgen buyukOlan(Dortgen);
    void kareyap();
};
#endif