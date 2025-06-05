/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        long long sum = 0, maxSub = LONG_MIN;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            maxSub = max(sum, maxSub);
            if (sum < 0)
                sum = 0;
        }
        return maxSub;
    }
};
// @lc code=end
