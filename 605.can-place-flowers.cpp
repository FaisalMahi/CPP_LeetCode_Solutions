// Question Link: https://leetcode.com/problems/can-place-flowers

/*
 * @lc app=leetcode id=605 lang=cpp
 *
 * [605] Can Place Flowers
 */

// @lc code=start
class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int sz = flowerbed.size();
        if (n == 0)
            return true;
        for (int i = 0; i < sz; i++)
        {
            if (flowerbed[i] == 0)
            {
                bool left = (i == 0 || flowerbed[i - 1] == 0);
                bool right = (i == sz - 1 || flowerbed[i + 1] == 0);
                if (left && right)
                {
                    flowerbed[i] = 1;
                    n--;
                    if (n == 0)
                        return true;
                }
            }
        }
        return false;
    }
};
// @lc code=end
