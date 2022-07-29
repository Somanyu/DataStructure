#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == val)
            {
                // nums[i - count] = nums[i];
                count++;
            }
            else
            {
                nums[i - count] = nums[i];
            }
        }
        return nums.size()-count;
    }
};

int main()
{
    Solution s;
    vector<int> arr = {3, 2, 2, 3};
    int val = 3;
    int res = s.removeElement(arr, val);
    cout << "Answer: " << res;
}