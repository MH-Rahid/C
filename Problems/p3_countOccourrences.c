// Count the occurrences of value in an array
#include <stdio.h>
int occurrences(int array[], int length, int toFind);
int main(int argc, char const* argv[])
{
    int array[] = { 3,4,5,4,3,3,5,5,6,4,355,4,4,33,4,56,7,8,887,6,5 };
    int length = sizeof(array) / sizeof(array[0]);

    int toFind = 5;

    int findArray5 = occurrences(array, length, toFind);

    printf("Count of Occurrences: %d", findArray5);

    return 0;
}



int occurrences(int array[], int length, int toFind) {
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (array[i] == toFind)
            count++;
    }

    return count;
}
