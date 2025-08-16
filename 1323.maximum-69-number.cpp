// Question Link: https://leetcode.com/problems/maximum-69-number


/*
 * @lc app=leetcode id=1323 lang=cpp
 *
 * [1323] Maximum 69 Number
 */

// @lc code=start
class Solution
{
public:
    int maximum69Number(int num)
    {
        string st = to_string(num);
        int sz = st.size();
        for (int i = 0; i < sz; i++)
        {
            if (st[i] == '6')
            {
                st[i] = '9';
                break;
            }
        }
        int ans = stoi(st);
        return ans;
    }
};
// @lc code=end
