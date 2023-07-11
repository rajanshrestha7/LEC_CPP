#include <iostream.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
class std
{
protected:
    char name[20];
    int rn;

public:
    void getdata()
    {
        cout << “Student =” ;
        cin >> name;
        cout << “Roll no.=” ;
        cin >> rn;
    }
    void showdata()
    {
        cout << “Student =”<< name << endl;
        cout << “Roll no =”<< rn << endl;
    }; // end of class std
    class marks : public std
    {
    protected:
        int m1, m2;

    public:
        void getm()
        {
            cout << “enter marks in Maths :” cin >> m1;
            cout << “enter marks in English =” ;
            cin >> m2;
        }
        void showm()
        {
            cout << “Maths” << m1 << endl;
            cout << “English =”<< m2 << endl;
        }
    }; // end of class marks
    class result : public marks
    {
        int total;

    public:
        void calculate()
        {
            total = m1 + m2;
        }
        B
                B1
                    D
                        Base Class
                            Intermediate
                                Base Class
                                    Derived Class
                                        Grandfather
                                            father
                                                child
                                                    fig : multilevel inheritance
                                                              Downloaded from www.jayaram.com.np -
            Er.Arun Kumar Yadav(Lecturer, Eastern College of Engineering) 74 void show()
        {
            cout << “Total marks =”<< total;
        }
    }; // end of class result
    void main()
    {
        result s1;
        s1.getdata();
        s1.getm();
        s1.calculate();
        s1.showdata();
        s1.shown();
        s1.show();
    }