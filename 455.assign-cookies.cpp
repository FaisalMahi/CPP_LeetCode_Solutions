// Question Link: https://leetcode.com/problems/assign-cookies

/*
 * @lc app=leetcode id=455 lang=cpp
 *
 * [455] Assign Cookies
 */

// @lc code=start
class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int m = g.size(), n = s.size(), cnt = 0, i = 0, j = 0;
        while (i < m && j < n)
        {
            if (g[i] <= s[j])
            {
                cnt++;
                i++;
            }
            j++;
        }
        return cnt;
    }
};
// @lc code=end
