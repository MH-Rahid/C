#include <stdio.h>
int removeDuplicates(int* nums, int numsSize) {

    int k = 1;
    for (int i = 1; i < numsSize; i++)
        if (nums[i] != nums[i - 1]) {
            nums[k] = nums[i];
            k++;
        }

    return k;
}

int main(int argc, char const* argv[])
{
    int nums[] = { 0,0,1,3,4,4,5,6,6,7 };
    int numsSize = sizeof(nums) / sizeof(int);

    int len = removeDuplicates(&nums, numsSize);

    for (int i = 0; i < len; i++)
    {
        printf("%d  ", nums[i]);
    }

    return 0;
}
