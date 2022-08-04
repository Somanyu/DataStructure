#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> res;
        int x = n;
        for (int i = 0; i < n; i++)
        {
            res.emplace_back(nums[i]);
            res.emplace_back(nums[x]);
            x++;
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {2, 5, 1, 3, 4, 7}; // 2,3,5,4,1,7
    int n = 3;
    vector<int> res = s.shuffle(nums, n);
    cout << "Answer: ";
    for (auto c : res)
    {
        cout << c << " ";
    }
}