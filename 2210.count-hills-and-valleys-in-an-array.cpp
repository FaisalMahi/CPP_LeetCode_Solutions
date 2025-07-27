// Question Link: https://leetcode.com/problems/count-hills-and-valleys-in-an-array


/*
 * @lc app=leetcode id=2210 lang=cpp
 *
 * [2210] Count Hills and Valleys in an Array
 */

// @lc code=start
class Solution
{
public:
    int countHillValley(vector<int> &nums)
    {
        int n = nums.size();
        int i = 0, j = 1, cnt = 0;
        while (j + 1 < n)
        {
            if ((nums[i] < nums[j] && nums[j] > nums[j + 1]) || (nums[i] > nums[j] && nums[j] < nums[j + 1]))
            {
                cnt++;
                i = j;
            }
            j++;
        }
        return cnt;
    }
};
// @lc code=end
