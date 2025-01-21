//Example 2: C Program to print the average of the given list of numbers
#include <stdio.h>
void insertArray(int* array, int n) {
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
}

double avarage(int* array, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + (double)*(array + i);
    }
    return (sum / n);
}

int main(int argc, char const* argv[])
{
    int array[10];
    printf("Enter 5 number: \n");
    insertArray(array, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n Avarage: %.2lf", avarage(array, 5));
    return 0;
}
