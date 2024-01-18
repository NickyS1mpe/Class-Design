#include <iostream>
#include <string.h>
#include "book.h"
using namespace std;
// int num,price,age;
// char *name,*writer,*press,*time,*langu,*status
Book::Book(int t, int n, int m, int s, const char *nm, const char *wr, const char *pr, const char *ti, const char *la, const char *st)
{
    num = n;
    price = m;
    age = s;
    name = new char[strlen(nm) + 1];
    strcpy(name, nm);
    writer = new char[strlen(wr) + 1];
    strcpy(writer, wr);
    press = new char[strlen(pr) + 1];
    strcpy(press, pr);
    time = new char[strlen(ti) + 1];
    strcpy(time, ti);
    langu = new char[strlen(la) + 1];
    strcpy(langu, la);
    status = new char[strlen(st) + 1];
    strcpy(status, st);
}

void Book::SetB(int n, const char *na, const char *wr, const char *pr, const char *ti, int p, const char *la, int a, const char *st)
{
    num = n;
    price = p;
    age = a;
    delete[] name;
    delete[] writer;
    delete[] press;
    delete[] time;
    delete[] langu;
    delete[] status;
    name = new char[strlen(na) + 1];
    strcpy(name, na);
    writer = new char[strlen(wr) + 1];
    strcpy(writer, wr);
    press = new char[strlen(pr) + 1];
    strcpy(press, pr);
    time = new char[strlen(ti) + 1];
    strcpy(time, ti);
    langu = new char[strlen(la) + 1];
    strcpy(langu, la);
    status = new char[strlen(st) + 1];
    strcpy(status, st);
    if (strlen(st) == 3)
        times++;
}

void Book::Show()
{
    cout << "Book ID:" << num << " Book Title:" << name << " Author:" << writer << " Publisher:" << press << " Publication Date:" << time << " Price:" << price << " Language:" << langu << " Suitable Age:" << age << " Borrowing Status:" << status << endl;
}

void Book::CNam(const char *Sa)
{
    delete[] name;
    name = new char[strlen(Sa) + 1];
    strcpy(name, Sa);
}

void Book::CWri(const char *na)
{
    delete[] writer;
    writer = new char[strlen(na) + 1];
    strcpy(writer, na);
}

void Book::CPre(const char *na)
{
    delete[] press;
    press = new char[strlen(na) + 1];
    strcpy(press, na);
}

void Book::CTim(const char *na)
{
    delete[] time;
    time = new char[strlen(na) + 1];
    strcpy(time, na);
}

void Book::CLan(const char *na)
{
    delete[] langu;
    langu = new char[strlen(na) + 1];
    strcpy(langu, na);
}

void Book::CSta(const char *na)
{
    delete[] status;
    status = new char[strlen(na) + 1];
    strcpy(status, na);
}

void Book::CPri(int n)
{
    price = n;
}

void Book::CAge(int n)
{
    age = n;
}

int Book::SNum(int n)
{
    if (num == n)
        return 1;
    else
        return 0;
}

int Book::SChr(const char *na)
{
    if (*na++ == *name)
        return 1;
    else
        return 0;
}

int Book::SCha(const char *na)
{
    if (*na++ == *writer)
        return 1;
    else
        return 0;
}

int Book::Times()
{
    return times;
}

int Book::Aged()
{
    return age;
}

void Book::Wtime(int n)
{
    times = n;
}

ostream &operator<<(ostream &out, const Book &p)
{
    out << " " << p.num << " " << p.name << " " << p.writer << " " << p.press << " " << p.time << " " << p.price << " " << p.langu << " " << p.age << " " << p.status << " " << p.times << " ";
    return out;
}
