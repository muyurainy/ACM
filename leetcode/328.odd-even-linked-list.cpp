/*
 * @lc app=leetcode id=328 lang=cpp
 *
 * [328] Odd Even Linked List
 *
 * https://leetcode.com/problems/odd-even-linked-list/description/
 *
 * algorithms
 * Medium (50.27%)
 * Total Accepted:    166.1K
 * Total Submissions: 329.9K
 * Testcase Example:  '[1,2,3,4,5]'
 *
 * Given a singly linked list, group all odd nodes together followed by the
 * even nodes. Please note here we are talking about the node number and not
 * the value in the nodes.
 *
 * You should try to do it in place. The program should run in O(1) space
 * complexity and O(nodes) time complexity.
 *
 * Example 1:
 *
 *
 * Input: 1->2->3->4->5->NULL
 * Output: 1->3->5->2->4->NULL
 *
 *
 * Example 2:
 *
 *
 * Input: 2->1->3->5->6->4->7->NULL
 * Output: 2->3->6->7->1->5->4->NULL
 *
 *
 * Note:
 *
 *
 * The relative order inside both the even and odd groups should remain as it
 * was in the input.
 * The first node is considered odd, the second node even and so on ...
 *
 *
 */
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
    ListNode* oddEvenList(ListNode* head) {
        if (head == NULL)
            return head;
        ListNode *odd = new ListNode(0);
        ListNode *even = new ListNode(0);
        ListNode *evenhead = even;
        ListNode *oddhead = odd;
        while(head && head->next){
            even->next = head;
            odd->next = head->next;
            even = even->next;
            odd = odd->next;
            if (head)
                head = head->next->next;
        }
        if (head){
            even->next = head;
            odd->next = head->next;
            even = even->next;
        }
        even->next = oddhead->next;
        return evenhead->next;
        // ListNode *odd1 = new Solution::ListNode(0);
        // even = new ListNode(1);
        // printf("%d", odd->val);

    }
};

/*
- 链表
*/
