#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    *returnSize = 2;
    int *ptr = malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if ((*(nums + i) + *(nums + j) == target))
            {
                ptr[0] = i;
                ptr[1] = j;

                return ptr;
            }
        }
    }
    // return;
}

int main()
{
    int nums[4] = {2, 7, 11, 15};
    int target = 9;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize = 2;

    int *numAdr = nums;
    int *returnSizeAdr = &returnSize;

    int *res;
    res = twoSum(numAdr, numsSize, target, returnSizeAdr);
    if ( res == NULL){
        printf("FAILED!!");
    }
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", *(res+i));
    }
    
    return 0;
}