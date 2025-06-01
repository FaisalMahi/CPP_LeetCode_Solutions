//Question Link: https://leetcode.com/problems/distribute-candies-among-children-ii


/*
 * @lc app=leetcode id=2929 lang=cpp
 *
 * [2929] Distribute Candies Among Children II
 */

// @lc code=start
class Solution
{
public:
    long long distributeCandies(int n, int limit)
    {
        long long int cnt = 0;
        long long int child1Min = max(0, n - 2 * limit);
        long long int child1Max = min(n, limit);
        for (int i = child1Min; i <= child1Max; i++)
        {
            int N = n - i;
            long long int child2Min = max(0, N - limit);
            long long int child2Max = min(N, limit);
            cnt += (child2Max - child2Min) + 1;
        }
        return cnt;
    }
    
};
// @lc code=end
