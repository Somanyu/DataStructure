#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        int n=nums.size();
        for (int i = 0; i < n; i++)
        {
            nums.emplace_back(nums[i]);
        }
        return nums;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 1};
    vector<int> res = s.getConcatenation(nums);
    cout << "Answer: ";
    for (auto c : res)
    {
        cout << c << " ";
    }
}