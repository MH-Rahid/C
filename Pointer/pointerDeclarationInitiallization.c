#include <stdio.h>
int main(int argc, char const* argv[])
{
    int x, y;
    int* z;                        // declaration pointer variable.

    x = 6; y = 7;
    z = &x;                        // initialization pointer variable to actual 
    //  variable with address of operator 

    printf("value of x : %d \n", x);
    printf("Address of x : %d \n", &x);
    printf("value of z : %d \n", z);
    printf("Address  of z : %d \n", &z);
    printf("pointer value of z : %d \n", *z);


    return 0;
}
