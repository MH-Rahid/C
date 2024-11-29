#include <stdio.h>
int fun() {
    static int num = 16;
    return num--;
}

int main(int argc, char const* argv[])
{
    for (fun(); fun();fun())
    {
        printf(" %4d ", fun());
    }

    return 0;
}
