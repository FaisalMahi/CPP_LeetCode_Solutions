//Question Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list

/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
    int SizeLinkedList(ListNode *head)
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
    ListNode *DeleteNthElement(ListNode *head, int pos)
    {
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        ListNode *tmp = dummy;

        for (int i = 0; i < pos; i++)
        {
            tmp = tmp->next;
        }
        ListNode *DeleteNode = tmp->next;
        tmp->next = tmp->next->next;
        delete DeleteNode;

        ListNode *newHead = dummy->next;
        delete dummy;
        return newHead;
    }
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int sz = SizeLinkedList(head);
        int pos = sz - n;
        return DeleteNthElement(head, pos);
    }
};
// @lc code=end
