#include <stdio.h>

int fact(int n);

int main(int argc, char const* argv[])
{
    printf("Enter your number : ");
    int num;
    scanf("%d", &num);

    printf("Factorial : %d", fact(num));


    return 0;
}


int fact(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);

}
