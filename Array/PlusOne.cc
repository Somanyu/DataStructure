#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int last = digits.size() - 1;
        if (digits[last] != 9)
        {
            digits[last]++;
            return digits;
        }
        else
        {
            for (int i = digits.size() - 1; i >= 0; i--)
            {
                if (digits[i] >= 9)
                {
                    digits[i] = 0;
                    digits[i - 1]++;
                }
            }
            if(digits[0] == 0) digits.insert(digits.begin(), 1);
            return digits;
        }
    }
};

int main()
{
    Solution s;
    vector<int> arr = {9, 9, 9};
    vector<int> res = s.plusOne(arr);
    cout << "Answer: ";
    for (auto c : res)
    {
        cout << c << " ";
    }
}