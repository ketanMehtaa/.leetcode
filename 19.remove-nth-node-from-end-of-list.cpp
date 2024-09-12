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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *first = head, *last = head;
        while (n--)
        {
            last = last->next;
        }

        // n == size of linked list so remove first head 
        if(!last)
            return head->next;
        
        while (last && last->next)
        {
            last = last->next;
            first = first->next;
        }
        first ->next = first->next->next;
        return head;
    }
};
// @lc code=end
