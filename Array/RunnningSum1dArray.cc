#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 1; i < n; i++)
        {
            nums[i]+=nums[i-1];
        }

        return nums;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> res = s.runningSum(nums);
    cout << "Answer: ";
    for (auto c : res)
    {
        cout << c << " ";
    }
}