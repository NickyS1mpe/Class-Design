#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED
using std::ostream;
class Book
{
private:
    int num, price, age, times;
    char *name, *writer, *press, *time, *langu, *status;
    // Book ID, Book Title, Author, Publisher, Publication Date, Price, Language, Suitable Age, Borrowing Status
public:
    Book(int times = 0, int num = 0, int price = 0, int age = 0, const char *name = "null", const char *writer = "null", const char *press = "null", const char *time = "null", const char *langu = "null", const char *status = "null");
    ~Book()
    {
        delete[] name;
        delete[] writer;
        delete[] press;
        delete[] press;
        delete[] time;
        delete[] langu;
        delete[] status;
    };
    void SetB(int n, const char *na, const char *wr, const char *pr, const char *ti, int p, const char *la, int a, const char *st);
    void Show();
    friend ostream &operator<<(ostream &out, const Book &p);
    void CNam(const char *Sa);
    void CPri(int n);
    void CAge(int n);
    void CWri(const char *na);
    void CPre(const char *na);
    void CTim(const char *na);
    void CLan(const char *na);
    void CSta(const char *na);
    int SNum(int n);
    int SChr(const char *na);
    int SCha(const char *na);
    int Times();
    int Aged();
    void Wtime(int n);
};
#endif // BOOK_H_INCLUDED
