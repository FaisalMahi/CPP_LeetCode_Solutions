// Question Link: https://leetcode.com/problems/fizz-buzz/description/

/*
 * @lc app=leetcode id=412 lang=cpp
 *
 * [412] Fizz Buzz
 */

// @lc code=start
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>result;
        for(int i=1;i<=n;i++)
        {
            if(i%5==0&&i%3==0)
            result.push_back("FizzBuzz");
            else if(i%5==0)
            {
                result.push_back("Buzz");
            }
            else if(i%3==0) 
            {
                result.push_back("Fizz");
            }
            else result.push_back(to_string(i));
        }
        return result;
    }
};
// @lc code=end

