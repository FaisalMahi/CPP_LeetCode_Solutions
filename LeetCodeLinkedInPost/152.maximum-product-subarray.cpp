// Question Link: https://leetcode.com/problems/maximum-product-subarray

/*
 * @lc app=leetcode id=152 lang=cpp
 *
 * [152] Maximum Product Subarray
 */

// @lc code=start
class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        long long int suf = 1, pre = 1;
        long long int ans = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            if (pre == 0)
                pre = 1;
            if (suf == 0)
                suf = 1;
            pre *= nums[i];
            suf *= nums[nums.size() - i - 1];
            ans = max(ans, max(suf, pre));
        }
        return ans;
    }
};
// @lc code=end
