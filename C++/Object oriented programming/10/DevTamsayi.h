#ifndef DEVTAMSAYI_H
#define DEVTAMSAYI_H
class DevTamsayi
{
private:
    char num[31];

public:
    DevTamsayi(char const[]);
    void yaz();
    void birArttir();
    bool esitMi(DevTamsayi);
};
#endif