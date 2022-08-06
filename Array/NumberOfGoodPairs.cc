#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        // // --- Bruteforce ---
        // int goodPair = 0;
        // for (auto i = 0; i < nums.size(); i++)
        // {
        //     for (auto j = i + 1; j < nums.size(); j++)
        //     {
        //         if (nums[i] == nums[j])
        //         {
        //             goodPair++;
        //         }
        //     }
        // }
        // return goodPair;

        int res = 0;
        unordered_map<int, int> count;
        for(auto it: nums){
            res += count[it]++;
            // cout << it << "-" << count[it] << "Total res-" << res << endl;
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {11, 22, 33, 11, 11, 33};
    int res = s.numIdenticalPairs(nums);
    cout << "Answer: " << res;
}