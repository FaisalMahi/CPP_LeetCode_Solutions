// Question Link: https://leetcode.com/problems/candy

/*
 * @lc app=leetcode id=135 lang=cpp
 *
 * [135] Candy
 */

// @lc code=start
class Solution
{
public:
    int candy(vector<int> &ratings)
    {
        int n = ratings.size();
        vector<int> LtoR(n, 1);
        vector<int> RtoL(n, 1);

        for (int i = 1; i < n; i++)
        {
            if (ratings[i] > ratings[i - 1])
            {
                LtoR[i] = max(LtoR[i], LtoR[i - 1] + 1);
            }
        }

        for (int i = n - 2; i >= 0; i--)
        {
            if (ratings[i] > ratings[i + 1])
            {
                RtoL[i] = max(RtoL[i], RtoL[i + 1] + 1);
            }
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += max(LtoR[i], RtoL[i]);
        }
        return cnt;
    }
};
// @lc code=end
