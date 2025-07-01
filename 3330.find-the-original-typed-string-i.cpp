//https://leetcode.com/problems/find-the-original-typed-string-i


/*
 * @lc app=leetcode id=3330 lang=cpp
 *
 * [3330] Find the Original Typed String I
 */

// @lc code=start
class Solution
{
public:
    int possibleStringCount(string word)
    {
        int n = word.size();
        int cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (word[i] == word[i - 1])
                cnt++;
        }
        return cnt;
    }
};
// @lc code=end
