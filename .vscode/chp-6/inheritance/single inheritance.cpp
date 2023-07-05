#include <iostream.h> 
class B 
{ private: int x ; 
 protected: int y ; 
 public: int z ; 
 void getdata( ) 
 { cout<< “Enter 3 numbers=” ; 
 cin>>x>>y>>z ; } 
 void showdata( ) 
 { cout<< “x=”<<x<<endl ; 

 cout<< “y=”<<y<<endl ; 
 cout<< “z=”<<z<<endl ; 
 } ; 
class D : public B 
 { private : int k ; 
 public : void getk( ) 
 { cout<< “Enter k=” ; cin>>k ; } 
 void output( ) 
 { int s=y+z+k ; 
 cout<< “y+z+k=”<<s<<endl ; } } ; 
 void main( ) 
 { 
 D d1 ; 
 d1.getdata( ) ; 
 d1.getk( ) ; 
 d1.showdata( ) ; 
 d1.output( ) ; 
 } 