#include<iostream>
using namespace std;

class complex
{
    private:
        int const real = 5;
        int img;
    
    public:
        void getImg(int x)
        {
            img = x;
            cout<<img;  
        }
        void getReal(int y)
        {
            real=y;
            cout<<real;
        }
};

int main()
{
    complex c1;
    c1.getImg(5);
    c1.getReal(18);
}
