#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> buildArray(vector<int> &nums)
    {

        // O(n) Space complexity
        // vector<int> arr;
        // for (int i = 0; i < nums.size(); i++)
        // {
        //     arr.push_back(nums[nums[i]]);
        // }
        // return arr;

        // O(1) Space complexity
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            nums[i] = n * (nums[nums[i]] % n) + nums[i];
        }
        for (int i = 0; i < n; i++)
        {
            nums[i] /= n;
        }
        return nums;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {0, 2, 1, 5, 3, 4};
    vector<int> res = s.buildArray(nums);
    cout << "Answer: ";
    for (auto c : res)
    {
        cout << c << " ";
    }
}