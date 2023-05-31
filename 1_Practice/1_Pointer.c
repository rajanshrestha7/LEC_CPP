//To see the address of variable

#include<stdio.h>

int main()
{
    int var=5;
    printf("Var: %d\n",var);

    //Notice The use of & befor var

    printf("Adress of var: %p",&var);
    return 0;
}