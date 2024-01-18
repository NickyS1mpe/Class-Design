#ifndef VIP_H_INCLUDED
#define VIP_H_INCLUDED
class Vip
{
private:
    int num, age, phone, times, book;
    char *name, *sex, *level;

public:
    // Member ID, Member Name, Member Age, Member Gender, Contact Phone, and other basic information.
    Vip(int times = 0, int num = 0, const char *name = "null", int age = 0, const char *sex = "null", int phone = 0, const char *level = "null", int book = 0);
    ~Vip()
    {
        delete[] name;
        delete[] sex;
        delete[] level;
    }
    void SetV(int n, const char *j, int y, const char *l, int x, const char *a);
    friend ostream &operator<<(ostream &out, const Vip &p);
    void Show();
    void CAge(int n);
    void CPho(int n);
    void CNam(const char *na);
    void CSex(const char *na);
    void CLev(const char *na);
    void CBoo(int n);
    int SChp(int n);
    int SChk(int n);
    int SHHH(const char *na);
    int Numm();
    void Putt(int n);
    int SNUM();
    void PTim();
    char *Rvip();
};

#endif // VIP_H_INCLUDED
