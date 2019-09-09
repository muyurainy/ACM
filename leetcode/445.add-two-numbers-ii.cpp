/*
 * @lc app=leetcode id=445 lang=cpp
 *
 * [445] Add Two Numbers II
 *
 * https://leetcode.com/problems/add-two-numbers-ii/description/
 *
 * algorithms
 * Medium (51.13%)
 * Total Accepted:    104.7K
 * Total Submissions: 204.7K
 * Testcase Example:  '[7,2,4,3]\n[5,6,4]'
 *
 * You are given two non-empty linked lists representing two non-negative
 * integers. The most significant digit comes first and each of their nodes
 * contain a single digit. Add the two numbers and return it as a linked list.
 *
 * You may assume the two numbers do not contain any leading zero, except the
 * number 0 itself.
 *
 * Follow up:
 * What if you cannot modify the input lists? In other words, reversing the
 * lists is not allowed.
 *
 *
 *
 * Example:
 *
 * Input: (7 -> 2 -> 4 -> 3) + (5 -> 6 -> 4)
 * Output: 7 -> 8 -> 0 -> 7
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
#include<stack>
#include<queue>
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (l1 == NULL && l2 == NULL)
            return NULL;
        stack<int> s1 = buildStack(l1);
        stack<int> s2 = buildStack(l2);
        int carry = 0, det;
        ListNode *last = nullptr, *tmp = nullptr;
        while (carry || !s1.empty() || !s2.empty()){
            det = carry;
            if (!s1.empty()){
                det += s1.top();
                s1.pop();
            }
            if (!s2.empty()){
                det += s2.top();
                s2.pop();
            }
            tmp = new ListNode(det % 10);
            carry = det / 10;
            tmp->next = last;
            last = tmp;
        }
        return last;

    }

    std::stack<int> buildStack(ListNode* l){
        std::stack<int> s;
        while (l != NULL){
            s.push(l->val);
            l = l->next;
        }
        return s;
    }
};

/*
- 链表
 */
