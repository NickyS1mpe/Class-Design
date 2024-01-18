#include <iostream>
#include <string.h>
#include "Borrow.h"
using namespace std;

Borrow::Borrow(int n, int x, const char *k, const char *z)
{
    No = n;
    num = x;
    // delete []outt;
    outt = new char[strlen(k) + 1];
    strcpy(outt, k);
    // delete []backt;
    backt = new char[strlen(z) + 1];
    strcpy(backt, z);
}

void Borrow::SetO(int n, int x, const char *k, const char *z)
{
    No = n;
    num = x;
    delete[] outt;
    outt = new char[strlen(k) + 1];
    strcpy(outt, k);
    delete[] backt;
    backt = new char[strlen(z) + 1];
    strcpy(backt, z);
}

void Borrow::Show()
{
    cout << "Book ID:" << No << " Member ID:" << num << " Borrowed Time:" << outt << " Return Time:" << backt << endl;
}
void Borrow::CNo(int n)
{
    No = n;
}
void Borrow::CNum(int n)
{
    num = n;
}
void Borrow::COut(const char *na)
{
    delete[] outt;
    outt = new char[strlen(na) + 1];
    strcpy(outt, na);
}
void Borrow::CBac(const char *na)
{
    delete[] backt;
    backt = new char[strlen(na) + 1];
    strcpy(backt, na);
}

int Borrow::CSSS(int n)
{
    if (No == n)
        return 1;
    else
        return 0;
}

int Borrow::CKKK(int n)
{
    if (num == n)
        return 1;
    else
        return 0;
}

int Borrow::NuMM()
{
    return num;
}

ostream &operator<<(ostream &out, const Borrow &p)
{
    out << " " << p.No << " " << p.num << " " << p.outt << " " << p.backt << " ";
    return out;
}
