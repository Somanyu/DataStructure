#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int sum = 0;
        for (int i = 0; i < accounts.size(); i++)
        {
            int rich = 0;
            for (int j = 0; j < accounts[i].size(); j++)
            {
                rich += accounts[i][j];
                // cout << accounts[i][j] << " ";
            }
            sum = max(sum, rich);
            // cout << endl;
        }
        return sum;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> accounts = {{1, 2, 3}, {3, 2, 1}};
    int res = s.maximumWealth(accounts);
    cout << "Answer: " << res;
}