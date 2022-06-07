#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    return num2;
}

int min(int num1, int num2)
{
    if (num1 < num2)
        return num1;
    return num2;
}

int maxArea(int *height, int heightSize)
{
    int area = 0, lindex = 0;
    int rindex = heightSize - 1;
    int shortLine;

    while (lindex < rindex)
    {
        shortLine = min(*(height + lindex), *(height + rindex));
        area = max(area, shortLine * (rindex - lindex));

        if (*(height + lindex) < *(height + rindex))
        {
            lindex++;
        }
        else
        {
            rindex--;
        }
    }
    return area;
}

int main()
{
    int height[9] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int heightSize = sizeof(height) / sizeof(height[0]);

    int *heightAddr = height;

    int result = maxArea(height, heightSize);
    printf("%d", result);
}