// Counting the fibonacci sequences 
#include <stdio.h>
int main(int argc, char const* argv[])
{
    int length;
    do
    {
        printf("Enter sequence length: ");
        scanf("%d", &length);

        if (length < 3)
            printf("Length must be >= 3 \n");

    } while (length < 3);

    int term1 = 0;
    int term2 = 1;
    int nextterm = 0;

    for (int i = 0; i < length; i++)
    {
        printf("%d  ", term1);
        nextterm = term1 + term2;
        term1 = term2;
        term2 = nextterm;

    }
    printf("%d", nextterm);



    // printf("Length : %d ", length);


    return 0;
}
