// Reverse an array
#include <stdio.h>

void reverseArray(int array[], int length);

int main(int argc, char const* argv[])
{
    int array[] = { 44,33,22,3,5,6,77,5 };
    int length = sizeof(array) / sizeof(array[0]);

    reverseArray(array, length);

    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }


    return 0;
}

void reverseArray(int array[], int length) {
    for (int i = 0; i < (length / 2); i++)
    {
        int temp = 0;
        temp = array[i];
        array[i] = array[length - 1 - i];
        array[length - 1 - i] = temp;

    }

}