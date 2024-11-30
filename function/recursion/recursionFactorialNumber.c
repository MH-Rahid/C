#include <stdio.h>
int factorial(int num) {
    if (num == 0)
        return 1;
    else return num * factorial(num - 1);
}

int main(int argc, char const* argv[])
{
    int num = 8;

    int fac = factorial(num);

    printf("factorial is : %d", fac);
    return 0;
}
