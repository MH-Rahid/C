#include <stdio.h>
int main(int argc, char const* argv[])
{
    int x = 4, * p; *p = x;
    printf("%d", *p);
    return 0;
}
