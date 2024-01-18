#ifndef BORROW_H_INCLUDED
#define BORROW_H_INCLUDED

class Borrow
{
private:
    int No, num;
    char *outt, *backt;

public:
    // Book ID, Member ID, Borrowed Time, Return Time
    Borrow(int No = 0, int num = 0, const char *outt = "null", const char *backt = "null");
    ~Borrow()
    {
        delete[] outt;
        delete[] backt;
    }
    void SetO(int n, int c, const char *na, const char *nc);
    friend ostream &operator<<(ostream &out, const Borrow &p);
    void Show();
    void CNo(int n);
    void CNum(int n);
    void COut(const char *na);
    void CBac(const char *na);
    int CSSS(int n);
    int CKKK(int n);
    int NuMM();
};

#endif // BORROW_H_INCLUDED
