#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(binary_search(nums.begin(), nums.end(), target) == true){
            auto it = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
            return it;
        }
        else {
            auto it = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
            return it;
        }

        
    }
};

int main()
{
    Solution s;
    vector<int> arr = {1,3,5,6};
    int val = 2;
    int res = s.searchInsert(arr, val);
    cout << "Answer: " << res;
}