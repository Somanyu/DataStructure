#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> res;
        // --- Hashmap ---
        unordered_map<int, int> mp;
        for (auto i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];
            if (mp.find(diff) != mp.end())
            {
                res.push_back(mp[diff]);
                res.push_back(i);
                return res;
            }
            mp[nums[i]] = i;
        }
        return res;

        // --- Bruteforce ---
        // for (auto i = 0; i < nums.size(); i++)
        // {
        //     for (auto j = i + 1; j < nums.size(); j++)
        //     {
        //         if (nums[i] + nums[j] == target)
        //         {
        //             res.emplace_back(i);
        //             res.emplace_back(j);
        //         }
        //     }
        // }
        // return res;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {2, 7, 9, 11, 15};
    int target = 20;

    vector<int> res = s.twoSum(nums, target);
    for (auto it : res)
    {
        cout << it << " ";
    }
}