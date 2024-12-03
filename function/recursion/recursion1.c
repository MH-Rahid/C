#include <stdio.h>

int fun(int num) {
    if (num == 0)
        return 1;
    else return 7 + fun(num - 2);


}

int main(int argc, char const* argv[])
{
    int num = 4;

    printf("num : %4d ", fun(num));
    return 0;
}

