#include<iostream>
using namespace std;

class parent
{
private:

public:
virtual void display()
{
    cout<<"Parent";
}

};
class child:public parent{
    public:
    void display(){ 
    cout<<"Child";
}};
int main()
{
    child c1;
    parent *Bptr;
    Bptr=&c1;
    Bptr->display();

return 0;
}
