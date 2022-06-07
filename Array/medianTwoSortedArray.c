#include <stdio.h>
#include <stdlib.h>

void sort(int arr[], int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        int temp;
        for (int j = i + 1; j < arrSize; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

double findMedianSortedArrays(int *nums1, int nums1Size, int *nums2, int nums2Size)
{

    int newArrSize = nums1Size + nums2Size;
    int newArr[newArrSize];

    for (int i = 0; i < nums1Size; i++)
    {
        newArr[i] = *(nums1 + i);
    }

    int k = nums1Size;
    for (int j = 0; j < nums2Size; j++)
    {
        newArr[k] = *(nums2 + j);
        k++;
    }

    sort(newArr, newArrSize);

    int mid = newArrSize / 2;
    if ((newArrSize % 2) != 0)
    {
        double median = newArr[mid];
        // printf("%lf", median);
        return median;
    }
    else
    {
        double median2 = ((double)newArr[mid] + (double)newArr[mid - 1]) / 2;
        // printf("%lf", median2);
        return median2;
    }
}

int main()
{
    int nums1[2] = {1, 3};
    int nums2[2] = {2, 4};

    int nums1Size = sizeof(nums1) / sizeof(nums1[0]);
    int nums2Size = sizeof(nums2) / sizeof(nums2[0]);

    int *nums1Adr = nums1, *nums2Adr = nums2;

    double res = findMedianSortedArrays(nums1Adr, nums1Size, nums2Adr, nums2Size);
    printf("%lf", res);
}