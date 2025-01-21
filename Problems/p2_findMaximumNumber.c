// Find the Maximum number in array
#include <stdio.h>
int findMaximum(int array[], int length);
int main(int argc, char const* argv[])

{
    int array[] = { 77,33,223,44,34,55 };
    int length = sizeof(array) / sizeof(array[0]);

    int maximum = findMaximum(array, length);

    printf("Minimum: %d", maximum);
    return 0;
}
int findMaximum(int array[], int length) {
    int max = array[0];

    for (int i = 1; i < length; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }

    }

    return max;
}
