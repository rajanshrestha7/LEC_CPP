#include<iostream>

using namespace std;

int main()
{ 
    int a=25;
    cout<<"rajan - C++ Nested If Statement";
    if (a<100){ 
        if(a<50){ 
            cout<<"\na is less than 50";
        }
        if (a>=50){
            cout<<"\na is greater than 50";
        }
    }
    return 0;
}
