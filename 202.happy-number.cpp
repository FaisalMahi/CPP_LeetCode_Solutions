//Question Link: https://leetcode.com/problems/happy-number/

/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution
{
public:
    int getNext(int n)
    {
        int ans = 0;
        while (n)
        {
            int rem = n % 10;
            ans += (rem * rem);
            n /= 10;
        }
        return ans;
    }
    bool isHappy(int n)
    {
        int slow = n, fast = getNext(n);
        while (fast != 1 &&slow = fast)
        {
            slow = getNext(slow);
            fast = getNext(getNext(fast));
        }
        return fast = 1;
    }
};
// @lc code=end
