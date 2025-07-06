// Question Link: https://leetcode.com/problems/implement-stack-using-queues


/*
 * @lc app=leetcode id=225 lang=cpp
 *
 * [225] Implement Stack using Queues
 */

// @lc code=start
class MyStack
{
public:
    queue<int> q;
    MyStack()
    {
    }

    void push(int x)
    {
        q.push(x);
    }

    int pop()
    {
        queue<int> q2;
        int val;
        while (!q.empty())
        {
            int k = q.front();
            q.pop();
            if (q.empty())
            {
                val = k;
                break;
            }
            q2.push(k);
        }
        q = q2;
        return val;
    }

    int top()
    {
        queue<int> q2;
        int val;
        while (!q.empty())
        {
            int k = q.front();
            q.pop();
            if (q.empty())
            {
                val = k;
            }
            q2.push(k);
        }
        q = q2;
        return val;
    }

    bool empty()
    {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end
