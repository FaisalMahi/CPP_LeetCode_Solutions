// Question Link: https://leetcode.com/problems/find-subsequence-of-length-k-with-the-largest-sum

/*
 * @lc app=leetcode id=2099 lang=cpp
 *
 * [2099] Find Subsequence of Length K With the Largest Sum
 */

// @lc code=start
class Solution
{
public:
    vector<int> maxSubsequence(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<pair<int, int>> vec(n);
        for (int i = 0; i < n; i++)
        {
            vec[i] = make_pair(i, nums[i]);
        }
        auto lambda = [](auto &p1, auto &p2)
        {
            return p1.second > p2.second;
        };
        sort(begin(vec), end(vec), lambda);
        sort(begin(vec), begin(vec) + k);

        vector<int> result(k);
        for (int i = 0; i < k; i++)
        {
            result[i] = vec[i].second;
        }
        return result;
    }
};
// @lc code=end
