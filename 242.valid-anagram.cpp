/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        string s1 = sort(s.begin(), s.end());
        string s2 = sort(t.begin(), t.end());
        if (s1 == s2)
            return true;
        else
            return false;
    }
};
// @lc code=end
