// Question Link: https://leetcode.com/problems/roman-to-integer

/* 
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution
{
public:
    int romanToInt(string s)
    {
        map<char, int> mp = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int sum = 0;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (mp[s[i]] >= mp[s[i + 1]])
                sum += mp[s[i]];
            else
                sum -= mp[s[i]];
        }
        sum += mp[s.back()];
        return sum;
    }
};
// @lc code=end
