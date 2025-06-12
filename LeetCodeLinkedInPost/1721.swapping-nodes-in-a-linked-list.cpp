// Question Link: https://leetcode.com/problems/swapping-nodes-in-a-linked-list/

/*
 * @lc app=leetcode id=1721 lang=cpp
 *
 * [1721] Swapping Nodes in a Linked List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    int size(ListNode *head)
    {
        ListNode *tmp = head;
        int cnt = 0;
        while (tmp != NULL)
        {
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }
    ListNode *swapNodes(ListNode *head, int k)
    {
        int sz = size(head);
        ListNode *first = head;
        ListNode *second = head;
        for (int i = 1; i < k; i++)
        {
            first = first->next;
        }
        for (int i = 1; i < sz - k + 1; i++)
        {
            second = second->next;
        }
        swap(first->val, second->val);
        return head;
    }
};
// @lc code=end
