#include <stdio.h>
int fun(int num) {

    if (num == 2)
        return 1;
    else
        return 1 + fun(num - 2);
}
int main(int argc, char const* argv[])
{
    int num = 16;
    printf("%d ", fun(num));
    return 0;
}
