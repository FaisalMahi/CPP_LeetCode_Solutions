//Question Link: https://leetcode.com/problems/valid-palindrome
 
 
/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(string s)
    {
        string s1;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[i] >= '0' && s[i] <= '9')
            {
                if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    s[i] += 32;
                }
                s1 += s[i];
            }
        }
        string s2 = s1;
        reverse(s2.begin(), s2.end());
        return s1 == s2;
    }
};
// @lc code=end
