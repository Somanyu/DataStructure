#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        // O(KlogK) approach
        // for (int i = 0; i < n; i++){
        //     nums1[i+m] = nums2[i];
        // }
        // sort(nums1.begin(), nums1.end());

        // O(K) approach - Two pointer
        int mx = m - 1;
        int ny = n - 1;
        int pointer = m + n - 1;

        while (mx >= 0 && ny >= 0)
        {
            if (nums1[mx] > nums2[ny])
            {
                nums1[pointer--] = nums1[mx--];
            }
            else
            {
                nums1[pointer--] = nums2[ny--];
            }
        }
        while (ny >= 0)
        {
            nums1[pointer--] = nums2[ny--];
        }
    }
};

int main()
{
    Solution s;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3;
    int n = 3;
    int val = 2;
    s.merge(nums1, m, nums2, n);
    for (auto c : nums1)
    {
        cout << c << " ";
    }
}