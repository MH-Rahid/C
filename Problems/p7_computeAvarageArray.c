// Compute the Avarage of an array
#include <stdio.h>

double avarage(int array[], int length);

int main(int argc, char const* argv[])
{
    int array[] = { 5,3,6,7,3,3,4,7,5,4 };
    int length = sizeof(array) / sizeof(array[0]);


    printf("Avarage of Array: %.2lf", avarage(array, length));

    return 0;
}


double avarage(int array[], int length) {

    int sumValue = 0;
    for (int i = 0; i < length; i++)
    {
        sumValue = sumValue + array[i];
    }

    double avarage = (double)sumValue / (double)length;

    return avarage;

}
