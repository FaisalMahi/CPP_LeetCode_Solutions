/*
 * @lc app=leetcode id=231 lang=cpp
 *
 * [231] Power of Two
 */

// @lc code=start
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        int cmp = n;
        if (n == 1)
            return true;
        else if (n == 0)
            return false;
        else if (n % 2 != 0)
            return false;

        else
        {
            while (cmp >= 0)
            {
                cmp = n / 2;
                n = n / 2;
                if (n == 1)
                    return true;
                else if (n % 2 != 0)
                {
                    return false;
                }
            }
        }
        return true;
    }
};
// @lc code=end
