// Question Link: https://leetcode.com/problems/fruit-into-baskets


/*
 * @lc app=leetcode id=904 lang=cpp
 *
 * [904] Fruit Into Baskets
 */

// @lc code=start
class Solution
{
public:
    int totalFruit(vector<int> &fruits)
    {
        int n = fruits.size();
        unordered_map<int, int> mp;
        int i = 0, j = 0, cnt = 0;
        while (j < n)
        {
            mp[fruits[j]]++;
            if (mp.size() <= 2)
            {
                cnt = max(cnt, j - i + 1);
            }
            else
            {
                mp[fruits[i]]--;
                if (mp[fruits[i]] == 0)
                {
                    mp.erase(fruits[i]);
                }
                i++;
            }
            j++;
        }
        return cnt;
    }
};
// @lc code=end
