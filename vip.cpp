#include <iostream>
#include <string.h>
#include "Vip.h"
using namespace std;

Vip::Vip(int t, int n, const char *j, int y, const char *l, int x, const char *a, int b)
{
    num = n;
    age = y;
    phone = x;
    // delete []name;
    name = new char[strlen(j) + 1];
    strcpy(name, j);
    // delete []sex;
    sex = new char[strlen(l) + 1];
    strcpy(sex, l);
    // delete []level;
    level = new char[strlen(a) + 1];
    strcpy(level, a);
}

void Vip::SetV(int n, const char *j, int y, const char *l, int x, const char *a)
{
    num = n;
    age = y;
    phone = x;
    delete[] name;
    name = new char[strlen(j) + 1];
    strcpy(name, j);
    delete[] sex;
    sex = new char[strlen(l) + 1];
    strcpy(sex, l);
    delete[] level;
    level = new char[strlen(a) + 1];
    strcpy(level, a);
}

void Vip::Show()
{
    cout << "Member ID:" << num << " Member Name:" << name << " Member Age:" << age << " Member Gender:" << sex << " Contact Phone:" << phone << " Membership Level:" << level << endl;
}

void Vip::CAge(int n)
{
    age = n;
}

void Vip::CLev(const char *na)
{
    delete[] level;
    level = new char[strlen(na) + 1];
    strcpy(level, na);
}

void Vip::CNam(const char *na)
{
    delete[] name;
    name = new char[strlen(na) + 1];
    strcpy(name, na);
}

void Vip::CPho(int n)
{
    phone = n;
}

void Vip::CSex(const char *na)
{
    delete[] sex;
    sex = new char[strlen(na) + 1];
    strcpy(sex, na);
}

int Vip::SChk(int n)
{
    if (phone == n)
        return 1;
    else
        return 0;
}

int Vip::SChp(int n)
{
    if (num == n)
        return 1;
    else
        return 0;
}

int Vip::SHHH(const char *na)
{
    if (*name++ == *na++)
        return 1;
    else
        return 0;
}

int Vip::Numm()
{
    return num;
}

void Vip::Putt(int n)
{
    times = n;
}

int Vip::SNUM()
{
    return times;
}

void Vip::PTim()
{
    times++;
}

ostream &operator<<(ostream &out, const Vip &p)
{
    out << " " << p.num << " " << p.name << " " << p.age << " " << p.sex << " " << p.phone << " " << p.level << " " << p.times << " ";
    return out;
}

char *Vip::Rvip()
{
    return level;
}
