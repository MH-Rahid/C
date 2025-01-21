// Example 3 C Program to find the largest number in the array.

#include <stdio.h>
void insertArray(int* array, int n) {
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
}

int findTheLargest(int* array, int n) {
    int temp = array[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (temp < array[i])
        {
            temp = array[i];


        }

    }

    return temp;

}
int main(int argc, char const* argv[])
{
    int array[10];
    printf("Enter 5 number: \n");
    int n = 5;

    insertArray(array, n);

    printf("largest Number: %d", findTheLargest(array, n));


    return 0;
}
