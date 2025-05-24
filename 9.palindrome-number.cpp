// Question Link: https://leetcode.com/problems/palindrome-number/description/

/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
       string s1=to_string(x);
       string s2=s1;
       reverse(s2.begin(),s2.end());
       if(s1==s2) return true;
       else return false; 
    }
};
// @lc code=end

