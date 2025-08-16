// Question Link: https://leetcode.com/problems/power-of-four


/*
 * @lc app=leetcode id=342 lang=cpp
 *
 * [342] Power of Four
 */

// @lc code=start
class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        if (n < 0)
            return false;

        for (int i = 0; i <= 15; i++)
        {
            if (pow(4, i) == n)
                return true;
        }
        return false;
    }
};
// @lc code=end
