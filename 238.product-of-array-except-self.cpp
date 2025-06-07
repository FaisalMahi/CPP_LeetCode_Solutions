// Question Link: https://leetcode.com/problems/product-of-array-except-self

/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> left(n);
        vector<int> right(n);
        left[0] = 1;
        right[n - 1] = 1;
        for (int i = 1; i < n; i++)
        {
            left[i] = nums[i - 1] * left[i - 1];
        }
        for (int i = n - 2; i >= 0; i--)
        {
            right[i] = nums[i + 1] * right[i + 1];
        }
        vector<int> result(n);
        for (int i = 0; i < n; i++)
        {
            result[i] = left[i] * right[i];
        }
        return result;
    }
};
// @lc code=end
