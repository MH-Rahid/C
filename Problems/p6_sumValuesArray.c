// Sum the values in an array
#include <stdio.h>

int sum(int array[], int length);

int main(int argc, char const* argv[])
{
    int array[] = { 5,43,5,6,7,43,3 };
    int length = sizeof(array) / sizeof(array[0]);


    printf("Sum of Array : %d", sum(array, length));

    return 0;
}

int sum(int array[], int length) {
    int sumValue = 0;
    for (int i = 0; i < length; i++)
    {
        sumValue = sumValue + array[i];
    }

    return sumValue;
}


