#include <stdio.h>

void main()
{
    int *pc, c;
    c = 5;
    pc = &c;

    printf("Value of address of c is given by pointer variable %p \n", pc);
    printf("Value of value of c is given by *pc i.e %d", *pc);
    return 0;
}

//*pc = address //Illegal operaration 