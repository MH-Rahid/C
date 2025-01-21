// Find the minimum number in Array
#include <stdio.h>
int findMinimum(int array[], int length);
int main(int argc, char const* argv[])

{
    int array[] = { 77,33,223,44,34,55 };
    int length = sizeof(array) / sizeof(array[0]);

    int minimum = findMinimum(array, length);

    printf("Minimum: %d", minimum);
    return 0;
}
int findMinimum(int array[], int length) {
    int min = array[0];

    for (int i = 1; i < length; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }

    }

    return min;
}
