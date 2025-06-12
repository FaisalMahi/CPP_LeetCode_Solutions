// Question Link: https://leetcode.com/problems/subarray-product-less-than-k

/*
 * @lc app=leetcode id=713 lang=cpp
 *
 * [713] Subarray Product Less Than K
 */

// @lc code=start
class Solution
{
public:
    int numSubarrayProductLessThanK(vector<int> &nums, int k)
    {
        if (k <= 1)
        {
            return 0;
        }
        int i = 0, j = 0, prod = 1, cnt = 0;
        while (j < nums.size())
        {
            prod *= nums[j];
            while (prod >= k)
            {
                prod /= nums[i];
                i++;
            }
            cnt += (j - i + 1);
            j++;
        }
        return cnt;
    }
};
// @lc code=end
