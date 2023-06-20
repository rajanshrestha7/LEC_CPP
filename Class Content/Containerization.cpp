#include <iostream>
using namespace std;

class A
{
public:
    int data;
    void getdata()
    {
        cout << "Enter a data:";
        cin >> data;
    }
    void showdata()
    {
        cout << "The value of data is : " << data;
    }
};

class B
{
public:
    A a;
    int b;
    void getdata()
    {
        a.getdata();
        cout << "Enter the value of B :";
        cin >> b;
    }
    void showdata()
    {
        a.showdata();
        cout << "The value of b is :" << b;
    }
};
int main()
{
    B b;
    b.getdata();
    b.showdata();
    return 0;
}