/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next)
            return false;

        ListNode* fast = head->next;
        ListNode* slow = head;
        while(fast && fast->next){
            if(fast == slow)
                return true;
            slow=slow->next;
            fast = fast->next->next;
        }
        return false;
    }
};
// @lc code=end

