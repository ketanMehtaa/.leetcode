/*
 * @lc app=leetcode id=876 lang=cpp
 *
 * [876] Middle of the Linked List
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
    ListNode *middleNode(ListNode *head)
    {
        // bruteForce to just first traverse
        // and return total/2
        // optimal 2 pointer approach
        ListNode *first = head;
        if (head->next == NULL)
            return head;

        ListNode *second = head->next;
        while (second->next && second->next->next)
        {   
            first=first->next;
            second = second->next->next;
        }
        // if(second->next){
            return first->next;
        // }
        // return first;
    }
};
// @lc code=end
