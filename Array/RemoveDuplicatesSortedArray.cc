#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int count=0;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]){
                count++;
            }
            else {
                nums[i - count] = nums[i];
            }
        }
        return nums.size()-count;
    }
};

int main()
{
    Solution s;
    vector<int> arr = {1,1,2};
    int res = s.removeDuplicates(arr);
    cout << "Answer: " << res;
}