#
# @lc app=leetcode id=21 lang=python3
#
# [21] Merge Two Sorted Lists
#
# https://leetcode.com/problems/merge-two-sorted-lists/description/
#
# algorithms
# Easy (47.96%)
# Total Accepted:    628.7K
# Total Submissions: 1.3M
# Testcase Example:  '[1,2,4]\n[1,3,4]'
#
# Merge two sorted linked lists and return it as a new list. The new list
# should be made by splicing together the nodes of the first two lists.
#
# Example:
#
# Input: 1->2->4, 1->3->4
# Output: 1->1->2->3->4->4
#
#
#
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        l1_index, l2_index = 0, 0
        mergeNode = ListNode(0)
        tmp = mergeNode
        while l1 and l2:
            if l1.val < l2.val:
                mergeNode.next = l1
                mergeNode = mergeNode.next
                l1 = l1.next
            else:
                mergeNode.next = l2
                mergeNode = mergeNode.next
                l2 = l2.next
        if l1:
            mergeNode.next = l1
        else:
            mergeNode.next = l2
        return tmp.next
