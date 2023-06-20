#include<iostream>
using namespace std;

class vechile
{
    private:
    int platenumber;
    
      public:
  int getnumber()
  {
    cout<<"Enter the number scooter:";
    //cin platenumber;
    // return platenumber ;

   }
   void number(int x)
   {
    platenumber = x;
    cout<<"The number plate is :"<<platenumber;
   }
};

int main()
{
    vechile scooter;
    scooter.getnumber();
    scooter.number(420);

    cout<<"value of number plate is ";
    return 0;
}

