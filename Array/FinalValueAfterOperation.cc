#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int result = 0;
        for (auto c : operations)
        {
            if(c == "++X" || c == "X++"){
                result++;
            }
            else {
                result--;
            }
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<string> operations = {"X++","++X","--X","X--"};
    int res = s.finalValueAfterOperations(operations);
    cout << "Answer: " << res;
}
