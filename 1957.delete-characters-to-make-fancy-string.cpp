// Question Link: https://leetcode.com/problems/delete-characters-to-make-fancy-string


/*
 * @lc app=leetcode id=1957 lang=cpp
 *
 * [1957] Delete Characters to Make Fancy String
 */

// @lc code=start
class Solution
{
public:
    string makeFancyString(string s)
    {
        int n = s.length();
        string result = "";
        result.push_back(s[0]);
        int freq = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == result.back())
            {
                freq++;
                if (freq < 3)
                {
                    result.push_back(s[i]);
                }
            }
            else
            {
                result.push_back(s[i]);
                freq = 1;
            }
        }
        return result;
    }
};
// @lc code=end
