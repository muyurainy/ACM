/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
 *
 * https://leetcode.com/problems/palindrome-linked-list/description/
 *
 * algorithms
 * Easy (36.92%)
 * Total Accepted:    296.7K
 * Total Submissions: 802.3K
 * Testcase Example:  '[1,2]'
 *
 * Given a singly linked list, determine if it is a palindrome.
 *
 * Example 1:
 *
 *
 * Input: 1->2
 * Output: false
 *
 * Example 2:
 *
 *
 * Input: 1->2->2->1
 * Output: true
 *
 * Follow up:
 * Could you do it in O(n) time and O(1) space?
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
    // ListNode* reverse(ListNode* head);
    // bool isEqual(ListNode* head1, ListNode* head2);
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return true;
        ListNode *slow, *fast;
        slow = head;
        fast = head;
        while (fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        if (fast != NULL)
            slow = slow->next;
        fast = head;
        while (fast->next != slow)
            fast = fast->next;
        fast->next = NULL;
        return isEqual(head, reverse(slow));
    }

    bool isEqual(ListNode* head1, ListNode* head2){
        while(head1 != NULL && head2 != NULL){
            if (head1->val != head2->val) return false;
            head1 = head1->next;
            head2 = head2->next;
        }
        return true;
    }

    ListNode* reverse(ListNode* head){
        ListNode *tmp = nullptr, *pre = nullptr;
        while (head != NULL) {
            tmp = head->next;
            head->next = pre;
            pre = head;
            head = tmp;
        }
        return pre;
    }
};

/*
- 链表
*/
