/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int MaxProfit = 0, BestBuy = prices[0];
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] > BestBuy)
            {
                maxProfit = prices[i] - BestBuy;
            }
            BestBuy = min(BestBuy, prices[i]);
        }
        return maxProfit;
    }
};
// @lc code=end
