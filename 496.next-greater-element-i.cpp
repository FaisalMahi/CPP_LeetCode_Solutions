// Question Link: https://leetcode.com/problems/next-greater-element-i


/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */

// @lc code=start
class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> mp;
        stack<int> st;
        for (int i = nums2.size() - 1; i >= 0; i--)
        {
            while (st.size() > 0 && st.top() <= nums2[i])
            {
                st.pop();
            }
            if (st.empty())
            {
                mp[nums2[i]] = -1;
            }
            else
            {
                mp[nums2[i]] = st.top();
            }
            st.push(nums2[i]);
        }

        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++)
        {
            ans.push_back(mp[nums1[i]]);
        }

        return ans;
    }
};
// @lc code=end
