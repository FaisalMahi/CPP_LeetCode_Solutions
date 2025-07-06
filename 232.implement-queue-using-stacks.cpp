// Question Link: https://leetcode.com/problems/implement-queue-using-stacks


/*
 * @lc app=leetcode id=232 lang=cpp
 *
 * [232] Implement Queue using Stacks
 */

// @lc code=start
class MyQueue
{
public:
    stack<int> st;
    MyQueue()
    {
    }

    void push(int x)
    {
        st.push(x);
    }

    int pop()
    {
        stack<int> st2;
        int val;
        while (!st.empty())
        {
            int k = st.top();
            st.pop();
            if (st.empty())
            {
                val = k;
                break;
            }
            st2.push(k);
        }
        while (!st2.empty())
        {
            st.push(st2.top());
            st2.pop();
        }
        return val;
    }

    int peek()
    {
        stack<int> st2;
        int val;
        while (!st.empty())
        {
            int k = st.top();
            st.pop();
            if (st.empty())
            {
                val = k;
            }
            st2.push(k);
        }
        while (!st2.empty())
        {
            st.push(st2.top());
            st2.pop();
        }
        return val;
    }

    bool empty()
    {
        return st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end
