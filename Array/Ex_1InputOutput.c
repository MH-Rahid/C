#include <stdio.h>
int main(int argc, char const* argv[])
{

    int grade[5];
    printf("Enter your Grade Math, OOP, C Programming : \n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &grade[i]);
    }


    printf("\nOutput: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", grade[i]);
    }




    return 0;
}
