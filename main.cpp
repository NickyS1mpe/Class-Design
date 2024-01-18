#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <stdio.h>
#include "book.cpp"
#include "search.cpp"
#include "analyse.cpp"
#include "borrow.cpp"
#include "vip.cpp"
using namespace std;

int main()
{
    string a;
    int n = 1, sum = 0, Sum = 0, SUM = 0;
    Book *Bo = new Book[1000];
    Vip *vp = new Vip[1000];
    Borrow *Br = new Borrow[1000];
    // 读取
    ifstream in("Test.txt", ios::in);
    while (in >> a)
    {
        if (a.compare("A") == 0)
        { // num,name,writer,press,time,price,langu,age,status
            int u, r, g, ti;
            char m[100], w[100], p[100], e[100], l[100], t[100];
            in >> u >> m >> w >> p >> e >> r >> l >> g >> t >> ti;
            Bo[sum].SetB(u, m, w, p, e, r, l, g, t);
            Bo[sum].Wtime(ti);
            sum += 1;
        }
        if (a.compare("B") == 0)
        { // num,name,age,sex,phone,level,book
            int u, g, p, b;
            char m[100], s[100], l[100];
            in >> u >> m >> g >> s >> p >> l >> b;
            vp[Sum].SetV(u, m, g, s, p, l);
            vp[Sum].Putt(b);
            Sum += 1;
        }
        if (a.compare("C") == 0)
        { // No,num,outt,backt
            int N, u;
            char o[100], b[100];
            in >> N >> u >> o >> b;
            Br[SUM].SetO(N, u, o, b);
            SUM += 1;
        }
    }
    in.close();
    while (n)
    {
        cout << "*****Welcome to the 'Picture Book Home' Information Management System*****" << endl;
        cout << "*****Please select the feature you'd like to use*****" << endl;
        cout << "A. Picture Book Data Management System" << endl
             << "B. Member Information Management System" << endl
             << "C. Borrowing Management System" << endl
             << "D. Comprehensive Query Module" << endl
             << "E. Statistical Analysis Module" << endl
             << "F. Exit the System" << endl;
        cout << "My choice is:";
        cin >> a;
        system("clear");
        if (a.compare("A") == 0)
        {
            string s, l, v;
            int z = 1, i, num, price, age, b, k;
            char name[100], writer[100], press[100], time[100], langu[100], status[100];
            while (z)
            {
                cout << "*****Using the Picture Book Data Management System*****" << endl;
                cout << "*****Please select the feature you'd like to use*****" << endl;
                cout << "A. Enter Picture Book Information" << endl
                     << "B. Modify Picture Book Information" << endl
                     << "C. Browse Picture Book Information" << endl
                     << "D. Delete Picture Book Information" << endl
                     << "E. Exit the Picture Book Data Management System" << endl;
                cout << "My choice is:";
                cin >> s;
                system("clear");
                if (s.compare("A") == 0)
                {
                    cout << "Enter the number of picture books to be entered:";
                    cin >> i;
                    if (i > 0)
                    {
                        for (int x = 0; x < i; x++)
                        {
                            cout << "Enter the number for the " << sum + x + 1 << "th picture book:";
                            cin >> num;
                            cout << "Picture Book Name:";
                            cin >> name;
                            cout << "Author:";
                            cin >> writer;
                            cout << "Publisher:";
                            cin >> press;
                            cout << "Publication Date:";
                            cin >> time;
                            cout << "Price:";
                            cin >> price;
                            cout << "Language:";
                            cin >> langu;
                            cout << "Suitable Age:";
                            cin >> age;
                            cout << "Borrowing Status:";
                            cin >> status;
                            Bo[sum + x].SetB(num, name, writer, press, time, price, langu, age, status);
                            system("clear");
                        }
                    }
                    cout << "Entry Complete" << endl;
                    sum += i;
                    system("read -n 1 -s -p 'Press any key to continue...'");
                }
                if (s.compare("B") == 0)
                {
                    cout << "Enter the number of the picture book you want to modify:";
                    cin >> k;
                    if (k <= sum)
                    {
                        int d = 1;
                        while (d)
                        {
                            cout << "Picture Book Information:";
                            Bo[k - 1].Show();
                            cout << "Information to modify:" << endl
                                 << "A. Picture Book Name" << endl
                                 << "B. Author" << endl
                                 << "C. Publisher" << endl
                                 << "D. Publication Date" << endl
                                 << "E. Price" << endl
                                 << "F. Language" << endl
                                 << "G. Suitable Age" << endl
                                 << "H. Borrowing Status" << endl
                                 << "I. Modification Complete" << endl;
                            cout << "My choice is:";
                            cin >> l;
                            if (l == "A")
                            {
                                cout << "Modification content:";
                                cin >> name;
                                Bo[k - 1].CNam(name);
                            }
                            if (l == "B")
                            {
                                cout << "Modification content:";
                                cin >> writer;
                                Bo[k - 1].CWri(writer);
                            }
                            if (l == "C")
                            {
                                cout << "Modification content:";
                                cin >> press;
                                Bo[k - 1].CPre(press);
                            }
                            if (l == "D")
                            {
                                cout << "Modification content:";
                                cin >> time;
                                Bo[k - 1].CTim(time);
                            }
                            if (l == "E")
                            {
                                cout << "Modification content:";
                                cin >> price;
                                Bo[k - 1].CPri(price);
                            }
                            if (l == "F")
                            {
                                cout << "Modification content:";
                                cin >> langu;
                                Bo[k - 1].CLan(langu);
                            }
                            if (l == "G")
                            {
                                cout << "Modification content:";
                                cin >> age;
                                Bo[k - 1].CAge(age);
                            }
                            if (l == "H")
                            {
                                cout << "Modification content:";
                                cin >> status;
                                Bo[k - 1].CSta(status);
                            }
                            if (l == "I")
                            {
                                d = 0;
                                cout << "Modification complete!" << endl;
                                system("read -n 1 -s -p 'Press any key to continue...'");
                            }
                            system("clear");
                        }
                    }
                    else
                    {
                        cout << "This picture book does not exist!" << endl;
                        system("read -n 1 -s -p 'Press any key to continue...'");
                    }
                }
                if (s == "C")
                {
                    if (sum > 0)
                    {
                        for (int x = 0; x < sum; x++)
                        {
                            Bo[x].Show();
                        }
                        cout << "Records output complete" << endl;
                        system("read -n 1 -s -p 'Press any key to continue...'");
                    }
                    else
                    {
                        cout << "No data!" << endl;
                        system("read -n 1 -s -p 'Press any key to continue...'");
                    }
                }
                if (s == "D")
                {
                    cout << "Enter the picture book to delete:";
                    cin >> b;
                    if (b <= sum)
                    {
                        Bo[b - 1].Show();
                        cout << "Do you want to delete? (yes or no):";
                        cin >> v;
                        if (v == "yes")
                        {
                            Bo[b - 1] = 0;
                            cout << "Deleted" << endl;
                        }
                        else
                        {
                            system("clear");
                        }
                    }
                    else
                    {
                        cout << "This picture book does not exist!" << endl;
                    }
                    system("read -n 1 -s -p 'Press any key to continue...'");
                }
                if (s == "E")
                {
                    z = 0;
                    system("clear");
                }
            }
        }
        if (a == "B")
        {
            string s, j, z;
            char name[100], sex[100], level[100];
            int v = 1, o, age, phone, num, d;
            while (v)
            {
                cout << "*****Using the Member Information Management System*****" << endl;
                cout << "*****Please select the feature you'd like to use*****" << endl;
                cout << "A. Member Information Entry" << endl
                     << "B. Modify Member Information" << endl
                     << "C. Browse Member Information" << endl
                     << "D. Delete Member Information" << endl
                     << "E. Exit Member Information Management System" << endl;
                cout << "My choice is:";
                cin >> s;
                system("clear");
                if (s == "A")
                {
                    cout << "Enter the number of members to be entered:";
                    cin >> o;
                    if (o > 0)
                    {
                        for (int q = 0; q < o; q++)
                        {
                            cout << "Enter the membership number for the " << Sum + q + 1 << "th member:";
                            cin >> num;
                            cout << "Member Name:";
                            cin >> name;
                            cout << "Member Age:";
                            cin >> age;
                            cout << "Member Gender:";
                            cin >> sex;
                            cout << "Contact Phone:";
                            cin >> phone;
                            cout << "Member Level (vip or svip):";
                            cin >> level;
                            vp[Sum + q].SetV(num, name, age, sex, phone, level);
                        }
                    }
                    cout << "Entry Complete" << endl;
                    Sum += o;
                    system("read -n 1 -s -p 'Press any key to continue...'");
                }
                if (s == "B")
                {
                    cout << "Enter the membership number of the member to modify:";
                    cin >> d;
                    if (d <= Sum)
                    {
                        int z = 1;
                        while (z)
                        {
                            cout << "Member Information:";
                            vp[d - 1].Show();
                            cout << "Information to modify:" << endl
                                 << "A. Member Name" << endl
                                 << "B. Member Age" << endl
                                 << "C. Member Gender" << endl
                                 << "D. Contact Phone" << endl
                                 << "E. Member Level (vip or svip)" << endl
                                 << "F. Modification Complete" << endl;
                            cout << "My choice is:";
                            cin >> j;
                            if (j == "A")
                            {
                                cout << "Modification content:";
                                cin >> name;
                                vp[d - 1].CNam(name);
                            }
                            if (j == "B")
                            {
                                cout << "Modification content:";
                                cin >> age;
                                vp[d - 1].CAge(age);
                            }
                            if (j == "C")
                            {
                                cout << "Modification content:";
                                cin >> sex;
                                vp[d - 1].CSex(sex);
                            }
                            if (j == "D")
                            {
                                cout << "Modification content:";
                                cin >> phone;
                                vp[d - 1].CPho(phone);
                            }
                            if (j == "E")
                            {
                                cout << "Modification content:";
                                cin >> level;
                                vp[d - 1].CLev(level);
                            }
                            if (j == "F")
                            {
                                z = 0;
                                cout << "Modification complete!" << endl;
                                system("read -n 1 -s -p 'Press any key to continue...'");
                            }
                            system("clear");
                        }
                    }
                    else
                    {
                        cout << "This member does not exist!" << endl;
                        system("read -n 1 -s -p 'Press any key to continue...'");
                    }
                }
                if (s == "C")
                {
                    if (Sum > 0)
                    {
                        for (int x = 0; x < Sum; x++)
                        {
                            vp[x].Show();
                        }
                        cout << "Records output complete" << endl;
                    }
                    else
                    {
                        cout << "No data!" << endl;
                    }
                    system("read -n 1 -s -p 'Press any key to continue...'");
                }
                if (s == "D")
                {
                    cout << "Enter the membership number of the member to delete:";
                    cin >> d;
                    if (d <= Sum)
                    {
                        vp[d - 1].Show();
                        cout << "Do you want to delete? (yes or no):";
                        cin >> z;
                        if (z == "yes")
                        {
                            vp[d - 1] = 0;
                            cout << "Deleted" << endl;
                        }
                        else
                        {
                            system("clear");
                        }
                    }
                    else
                    {
                        cout << "This member does not exist!" << endl;
                    }
                    system("read -n 1 -s -p 'Press any key to continue...'");
                }
                if (s == "E")
                {
                    v = 0;
                    system("clear");
                }
            }
        }
        if (a == "C")
        {
            string s, j, z;
            int n = 1, k, No, num, i, x1;
            char outt[100], backt[100];
            char *p1 = "vip";
            while (n)
            {
                cout << "*****Using the Borrowing Management System*****" << endl;
                cout << "*****Please select the feature you'd like to use*****" << endl;
                cout << "A. Borrowing Information Entry" << endl
                     << "B. Modify Borrowing Information" << endl
                     << "C. Browse Borrowing Information" << endl
                     << "D. Delete Borrowing Information" << endl
                     << "E. Exit Borrowing Management System" << endl;
                cout << "My choice is:";
                cin >> s;
                system("clear");
                if (s == "A")
                {
                    cout << "Enter the number of borrowing information to be entered:";
                    cin >> k;
                    if (k > 0)
                    {
                        for (int q = 0; q < k; q++)
                        {
                            cout << "Enter the " << SUM + q + 1 << "th borrowing information:"; // Book number, member number, checkout time, return time
                            cout << "Book number:";
                            cin >> No;
                            cout << "Member number:";
                            cin >> num;
                            for (int x = 0; x < Sum; x++)
                            {
                                if (num == vp[x].Numm())
                                {
                                    vp[x].PTim();
                                    x1 = x;
                                    break;
                                }
                            }
                            if (strcmp(p1, vp[x1].Rvip()) == 0)
                            {
                                if (vp[x1].SNUM() > 10)
                                {
                                    system("clear");
                                    cout << "Non-svip members can only borrow 10 books" << endl;
                                    system("read -n 1 -s -p 'Press any key to continue...'");
                                    break;
                                }
                            }
                            cout << "Checkout time:";
                            cin >> outt;
                            cout << "Return time:";
                            cin >> backt;
                            Br[SUM + q].SetO(No, num, outt, backt);
                            SUM += 1;
                        }
                    }
                    cout << "Entry Complete" << endl;
                    system("read -n 1 -s -p 'Press any key to continue...'");
                }
                if (s == "B")
                {
                    cout << "Enter the borrowing information number to modify:";
                    cin >> k;
                    if (k <= SUM)
                    {
                        int f = 1;
                        while (f)
                        {
                            cout << "Borrowing information:";
                            Br[k - 1].Show();
                            cout << "Information to modify:" << endl
                                 << "A. Book number" << endl
                                 << "B. Member number" << endl
                                 << "C. Checkout time" << endl
                                 << "D. Return time" << endl
                                 << "E. Modification Complete" << endl;
                            cout << "My choice is:";
                            cin >> j;
                            if (j == "A")
                            {
                                cout << "Modification content:";
                                cin >> No;
                                Br[k - 1].CNo(No);
                            }
                            if (j == "B")
                            {
                                cout << "Modification content:";
                                cin >> num;
                                Br[k - 1].CNum(num);
                            }
                            if (j == "C")
                            {
                                cout << "Modification content:";
                                cin >> outt;
                                Br[k - 1].COut(outt);
                            }
                            if (j == "D")
                            {
                                cout << "Modification content:";
                                cin >> backt;
                                Br[k - 1].CBac(backt);
                            }
                            if (j == "E")
                            {
                                f = 0;
                                cout << "Modification complete!" << endl;
                                system("read -n 1 -s -p 'Press any key to continue...'");
                            }
                            system("clear");
                        }
                    }
                    else
                    {
                        cout << "This borrowing information does not exist!" << endl;
                        system("read -n 1 -s -p 'Press any key to continue...'");
                    }
                }
                if (s == "C")
                {
                    if (SUM > 0)
                    {
                        for (int x = 0; x < SUM; x++)
                        {
                            cout << "Borrowing information " << x + 1 << ":";
                            Br[x].Show();
                        }
                        cout << "Records output complete" << endl;
                    }
                    else
                    {
                        cout << "No data!" << endl;
                    }
                    system("read -n 1 -s -p 'Press any key to continue...'");
                }
                if (s == "D")
                {
                    cout << "Enter the borrowing information number to delete:";
                    cin >> i;
                    if (i <= SUM)
                    {
                        Br[i - 1].Show();
                        cout << "Do you want to delete? (yes or no):";
                        cin >> z;
                        if (z == "yes")
                        {
                            Br[i - 1] = 0;
                            cout << "Deleted" << endl;
                        }
                        else
                        {
                            system("clear");
                        }
                    }
                    else
                    {
                        cout << "This borrowing information does not exist!" << endl;
                    }
                    system("read -n 1 -s -p 'Press any key to continue...'");
                }
                if (s == "E")
                {
                    n = 0;
                    system("clear");
                }
            }
        }
        if (a == "D")
        {
            string s, c;
            int n = 1, d;
            char *p = new char;
            while (n)
            {
                cout << "*****Using the Comprehensive Query Module*****" << endl;
                cout << "*****Please select the feature you'd like to use*****" << endl;
                cout << "A. Book Information Query" << endl
                     << "B. Member Information Query" << endl
                     << "C. Borrowing Information Query" << endl
                     << "D. Exit Comprehensive Query Module" << endl;
                cout << "My choice is:";
                cin >> s;
                system("clear");
                if (s == "A")
                {
                    if (sum > 0)
                    {
                        int x = 1;
                        while (x)
                        {
                            cout << "Please select the way to query book information:" << endl
                                 << "A. Book Number" << endl
                                 << "B. Book Title" << endl
                                 << "C. Author" << endl
                                 << "D. Exit Book Query" << endl;
                            cout << "My choice is:";
                            cin >> c;
                            system("clear");
                            if (c == "A")
                            {
                                int tf = 0;
                                cout << "Enter the book number you want to query:";
                                cin >> d;
                                for (int k = 0; k < sum; k++)
                                    if (Bo[k].SNum(d) == 1)
                                    {
                                        Bo[k].Show();
                                        tf = 1;
                                    }
                                if (tf == 0)
                                    cout << "No data!" << endl;
                            }
                            if (c == "B")
                            {
                                int tf = 0;
                                cout << "Enter the book title you want to query:";
                                cin >> p;
                                for (int k = 0; k < sum; k++)
                                    if (Bo[k].SChr(p) == 1)
                                    {
                                        Bo[k].Show();
                                        tf = 1;
                                    }
                                if (tf == 0)
                                    cout << "No data!" << endl;
                            }
                            if (c == "C")
                            {
                                int tf = 0;
                                cout << "Enter the author you want to query:";
                                cin >> p;
                                for (int k = 0; k < sum; k++)
                                    if (Bo[k].SCha(p) == 1)
                                    {
                                        Bo[k].Show();
                                        tf = 1;
                                    }
                                if (tf == 0)
                                    cout << "No data!" << endl;
                            }
                            if (c == "D")
                            {
                                x = 0;
                                cout << "Exit successful!" << endl;
                            }
                            system("read -n 1 -s -p 'Press any key to continue...'");
                            system("clear");
                        }
                    }
                    else
                    {
                        cout << "No data!" << endl;
                        system("read -n 1 -s -p 'Press any key to continue...'");
                    }
                }
                if (s == "B")
                {
                    if (Sum > 0)
                    {
                        int l = 1, r;
                        char *p = new char;
                        while (l)
                        {
                            cout << "Please select the way to query member information:" << endl
                                 << "A. Member Number" << endl
                                 << "B. Member Name" << endl
                                 << "C. Phone Number Query" << endl
                                 << "D. Exit Member Information Query" << endl;
                            cout << "My choice is:";
                            cin >> c;
                            system("clear");
                            if (c == "A")
                            {
                                int tf = 0;
                                cout << "Enter the member number you want to query:";
                                cin >> r;
                                for (int k = 0; k < sum; k++)
                                    if (vp[k].SChp(r) == 1)
                                    {
                                        vp[k].Show();
                                        tf = 1;
                                    }
                                if (tf == 0)
                                    cout << "No data!" << endl;
                            }
                            if (c == "B")
                            {
                                int tf = 0;
                                cout << "Enter the member name you want to query:";
                                cin >> p;
                                for (int k = 0; k < sum; k++)
                                    if (vp[k].SHHH(p) == 1)
                                    {
                                        vp[k].Show();
                                        tf = 1;
                                    }
                                if (tf == 0)
                                    cout << "No data!" << endl;
                            }
                            if (c == "C")
                            {
                                int tf = 0;
                                cout << "Enter the phone number you want to query:";
                                cin >> r;
                                for (int k = 0; k < sum; k++)
                                    if (vp[k].SChk(r) == 1)
                                    {
                                        vp[k].Show();
                                        tf = 1;
                                    }
                                if (tf == 0)
                                    cout << "No data!" << endl;
                            }
                            if (c == "D")
                            {
                                l = 0;
                                cout << "Exit successful!" << endl;
                            }
                            system("clear");
                        }
                    }
                    else
                        cout << "No data!" << endl;
                    system("read -n 1 -s -p 'Press any key to continue...'");
                    delete p;
                }
                if (s == "C")
                {
                    if (SUM > 0)
                    {
                        int q = 1, t;
                        while (q)
                        {
                            cout << "Please select the way to query borrowing information:" << endl
                                 << "A. Book Number" << endl
                                 << "B. Member Number" << endl
                                 << "C. Exit Borrowing Information Query" << endl;
                            cout << "My choice is:";
                            cin >> c;
                            system("clear");
                            if (c == "A")
                            {
                                int tf = 0;
                                cout << "Enter the book number you want to query:";
                                cin >> t;
                                for (int k = 0; k < sum; k++)
                                    if (Br[k].CSSS(t) == 1)
                                    {
                                        Br[k].Show();
                                        tf = 1;
                                    }
                                if (tf == 0)
                                    cout << "No data!" << endl;
                            }
                            if (c == "B")
                            {
                                int tf = 0;
                                cout << "Enter the member number you want to query:";
                                cin >> t;
                                for (int k = 0; k < sum; k++)
                                    if (Br[k].CKKK(t) == 1)
                                    {
                                        Br[k].Show();
                                        tf = 1;
                                    }
                                if (tf == 0)
                                    cout << "No data!" << endl;
                            }
                            if (c == "C")
                            {
                                q = 0;
                                cout << "Exit successful!" << endl;
                            }
                            system("clear");
                        }
                    }
                    else
                        cout << "No data!" << endl;
                    system("read -n 1 -s -p 'Press any key to continue...'");
                }
                if (s == "D")
                    n = 0;
                system("clear");
            }
            delete p;
        }
        if (a == "E")
        {
            string s;
            int n = 1;
            while (n)
            {
                cout << "*****Using the Statistical Analysis Module*****" << endl;
                cout << "*****Please select the feature you'd like to use*****" << endl;
                cout << "A. Member Borrowing Ranking" << endl
                     << "B. Book Borrowing Ranking" << endl
                     << "C. Book Suitable Age Ranking" << endl
                     << "D. Exit Statistical Analysis Module" << endl;
                cout << "My choice is:";
                cin >> s;
                system("clear");
                if (s == "A")
                {
                    int cou[10000], a;
                    cout << "Member borrowing ranking:" << endl;
                    for (int t = 0; t < Sum; t++)
                    {
                        cou[t] = vp[t].SNUM();
                    }
                    for (int t = 0; t < Sum; t++)
                        for (int k = 0; t < Sum; t++)
                        {
                            if (cou[k] < cou[k + 1])
                            {
                                a = cou[k];
                                cou[k] = cou[k + 1];
                                cou[k + 1] = a;
                            }
                        }
                    for (int t = 0; t < Sum; t++)
                        for (int k = 0; k < Sum; k++)
                        {
                            if (vp[k].SNUM() == cou[t])
                                vp[k].Show();
                        }
                }
                if (s == "B")
                {
                    int times[10000], a;
                    cout << "Book borrowing ranking:" << endl;
                    for (int x = 0; x < sum; x++)
                        times[x] = Bo[x].Times();
                    for (int t = 0; t < sum; t++)
                        for (int k = 0; k < sum; k++)
                        {
                            if (times[k] < times[k + 1])
                            {
                                a = times[k];
                                times[k] = times[k + 1];
                                times[k + 1] = a;
                            }
                        }
                    for (int x = 0; x < sum; x++)
                        for (int t = 0; t < sum; t++)
                        {
                            if (Bo[t].Times() == times[x])
                                Bo[t].Show();
                        }
                }
                if (s == "C")
                {
                    int aged[10000], a;
                    cout << "Book suitable age ranking:" << endl;
                    for (int x = 0; x < sum; x++)
                        aged[x] = Bo[x].Aged();
                    for (int t = 0; t < sum; t++)
                        for (int k = 0; k < sum; k++)
                        {
                            if (aged[k] < aged[k + 1])
                            {
                                a = aged[k];
                                aged[k] = aged[k + 1];
                                aged[k + 1] = a;
                            }
                        }
                    for (int x = 0; x < sum; x++)
                        for (int t = 0; t < sum; t++)
                        {
                            if (Bo[t].Aged() == aged[x])
                                Bo[t].Show();
                        }
                }
                if (s == "D")
                    n = 0;
                system("read -n 1 -s -p 'Press any key to continue...'");
                system("clear");
            }
        }
        if (a == "F")
            n = 0;
    }

    // Writing to file
    ofstream out("Test.txt");
    while (sum--)
    {
        out << "A";
        out << Bo[sum];
    }
    while (Sum--)
    {
        out << "B";
        out << vp[Sum];
    }
    while (SUM--)
    {
        out << "C";
        out << Br[SUM];
    }
    out.close();
    delete[] vp;
    delete[] Bo;
    delete[] Br;
    cout << "Exit successful!";
    return 0;
}
