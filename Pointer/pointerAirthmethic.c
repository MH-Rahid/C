#include <stdio.h>
int main(int argc, char const* argv[])
{
    int x, y;
    x = 6; y = 7;
    int* z = &x;


    // increment in a pointer.
    printf("value of x : %d \n", x);
    ++*z;
    printf("increment pointer value of z : %d \n", *z);
    --*z;
    printf("drecrement pointer value of z : %d \n", *z);

    printf("\naddress value  of x : %d \n", &x);
    printf("value of z : %d \n", z);
    ++z;
    printf("\nIncrement value  of z : %d \n", z);
    z--;
    printf("drecrement value  of z : %d \n", z);

    // addition and subtraction
    printf("\n arithmetic operation \n");
    printf("\n ((*z) + y) = : %d \n", ((*z) + y));
    printf("\n ((*z) - y) = : %d \n", ((*z) - y));
    printf("\n ((*z) * y) = : %d \n", ((*z) * y));
    printf("\n ((*z) / y) = : %d \n", ((*z) / y));

    printf("\nAddress manipulate\n");
    printf("value of y : %d\n", y);
    printf("value of z : %d\n", z);
    printf("\nz + y = : %d \n", z + y);
    printf("z - y = : %d \n", z - y);

    // 










    return 0;
}
