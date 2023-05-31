//Function and the variable

#include <iostream>
using namespace std;

// Namespace n1;
namespace n1
{
    int x = 2;
    //Function to display the message for namespace n1

    void fun()
    {
        cout << "This is fun() of n1" << endl;
    }
}

//Namespace n2s
namespace n2
{
    int x = 5;

    // Function to display the message for namespace n2
    void fun()
    {
        cout << "This is fun() of n2" << endl;
    }
}


//Driver code
int main()
{

    //This methods and variable called usign scope resolution( :: )
    cout << n1::x << endl;

    // Function call
    n1::fun();

    cout << n2::x << endl;

    // Function call
    n2::fun();

    return 0;
}