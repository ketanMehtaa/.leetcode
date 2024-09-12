// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem328.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=328 lang=cpp
 *
 * [328] Odd Even Linked List
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
    ListNode *oddEvenList(ListNode *head)
    {
        ListNode *odd = head;
        if (!head || !head->next)
            return head;

        ListNode *even = head->next, *backupEven = head->next;
        // just check even and even next
        // because
        // Simpler Loop Condition:
        // The while loop continues as long as there are even nodes to process.
        while (even && even->next)
        {
            if (odd->next)
            {
                odd->next = odd->next->next;
                odd = odd->next;
            }
            if (even->next)
            {
                even->next = even->next->next;
                even = even->next;
            }
        }
        odd->next = backupEven;
        return head;
    }
};
// @lc code=end
