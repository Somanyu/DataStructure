#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        // sort(nums.begin(), nums.end());
        // for (int i = 0; i < nums.size()-1; i++)
        // {
        //     if (nums[i] == nums[i + 1])
        //     {
        //         return true;
        //     }
        // }
        // return false;

        set<int> st;
        for (auto it : nums)
        {
            if (st.find(it) != st.end())
            {
                return true;
            }
            st.insert(it);
        }
        return false;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 1};
    bool res = s.containsDuplicate(nums);
    cout << "Answer: " << res;
}