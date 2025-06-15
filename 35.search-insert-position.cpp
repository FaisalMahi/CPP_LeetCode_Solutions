// Question Link: https://leetcode.com/problems/search-insert-position

/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start

/* *****  First Approach: Linear Search.  ***** */

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int sz = nums.size(), ans = 0;
        for (int i = 0; i < sz; i++)
        {
            if (nums[i] >= target)
            {
                ans = i;
                break;
            }

            else if (nums[sz - 1] < target)
            {
                ans = sz;
            }
        }
        return ans;
    }
};

/* *****  Second Approach. Binary Search.  ***** */

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int sz = nums.size();
        int left = 0, right = sz - 1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            if (nums[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return left;
    }
};
// @lc code=end
