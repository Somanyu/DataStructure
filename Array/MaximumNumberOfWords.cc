#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int mostWordsFound(vector<string> &sentences)
    {
        int sum = 0;
        for (int i = 0; i < sentences.size(); i++)
        {
            int words = 1;
            for (int j = 0; j < sentences[i].length(); j++)
            {

                // words += sentences[i][j];
                // cout << sentences[j] << " ";
                if (sentences[i][j] == ' ')
                    words++;
            }
            sum = max(sum, words);
            // cout << endl;
        }
        return sum;
    }
};

int main()
{
    Solution s;
    vector<string> sentences = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    int res = s.mostWordsFound(sentences);
    cout << "Answer: " << res;
}