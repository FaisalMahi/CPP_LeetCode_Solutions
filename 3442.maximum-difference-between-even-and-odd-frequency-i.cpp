// Question Link: https://leetcode.com/problems/maximum-difference-between-even-and-odd-frequency-i

/*
 * @lc app=leetcode id=3442 lang=cpp
 *
 * [3442] Maximum Difference Between Even and Odd Frequency I
 */

// @lc code=start
// Question Link: https://leetcode.com/problems/maximum-difference-between-even-and-odd-frequency-i

/*
 * @lc app=leetcode id=3442 lang=cpp
 *
 * [3442] Maximum Difference Between Even and Odd Frequency I
 */

// @lc code=start
class Solution
{
public:
    int maxDifference(string s)
    {
        int sz = s.length();
        vector<int> freq(26, 0);
        for (char &ch : s)
        {
            freq[ch - 'a']++;
        }
        int maxOdd = 0;
        int minEven = INT_MAX;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] == 0)
                continue;
            else
            {
                if (freq[i] % 2 != 0)
                    maxOdd = max(maxOdd, freq[i]);
                else
                    minEven = min(minEven, freq[i]);
            }
        }
        return maxOdd - minEven;
    }
};
// @lc code=end

// @lc code=end
