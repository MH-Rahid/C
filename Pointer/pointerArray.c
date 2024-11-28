// #include <stdio.h>
// int main(int argc, char const* argv[])
// {
//     int myArray[] = { 3,5,6,2,4, };
//     int* ptr = myArray;

//     printf("address of myarray : %p \n", myArray);
//     printf("value of ptr : %p \n", ptr);

//     printf("\n    Pointer to an array \n");
//     int (*ptr1)[5];
//     int myArray1[5];
//     int* p1;

//     p1 = myArray1;
//     ptr1 = &myArray1;

//     printf("Value of p1 : %d \n", p1);
//     printf("Value of ptr1 : %d \n", ptr1);


//     p1++;
//     ptr1++;
//     printf("\n after increment and decrement \n");
//     printf("Value of p1 : %d \n", p1);
//     printf("Value of ptr1 : %d \n", ptr1);


//     return 0;
// }


// C program to illustrate sizes of
// pointer of array
#include<stdio.h>

int main()
{
    int arr[] = { 3, 5, 6, 7, 9 };
    int* p = arr;
    int (*ptr)[5] = &arr;

    printf("p = %p, ptr = %p\n", p, ptr);
    printf("*p = %d, *ptr = %p\n", *p, *ptr);

    printf("sizeof(p) = %lu, sizeof(*p) = %lu\n",
        sizeof(p), sizeof(*p));
    printf("sizeof(ptr) = %lu, sizeof(*ptr) = %lu\n",
        sizeof(ptr), sizeof(*ptr));
    return 0;
}
