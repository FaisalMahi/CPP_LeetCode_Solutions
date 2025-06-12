//Question Link: https://leetcode.com/problems/maximum-difference-between-adjacent-elements-in-a-circular-array


/*
 * @lc app=leetcode id=3423 lang=cpp
 *
 * [3423] Maximum Difference Between Adjacent Elements in a Circular Array
 */

// @lc code=start
class Solution
{
public:
    int maxAdjacentDistance(vector<int> &nums)
    {
        int sz = nums.size();
        int cmp = abs(nums[0] - nums[sz - 1]);
        int maximum = INT_MIN;
        for (int i = 0; i < sz - 1; i++)
        {
            if (abs(nums[i] - nums[i + 1]) >= maximum)
            {
                maximum = abs(nums[i] - nums[i + 1]);
            }
        }
        maximum = max(cmp, maximum);
        return maximum;
    }
};
// @lc code=end
