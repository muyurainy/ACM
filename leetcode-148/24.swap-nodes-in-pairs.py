#
# @lc app=leetcode id=24 lang=python3
#
# [24] Swap Nodes in Pairs
#
# https://leetcode.com/problems/swap-nodes-in-pairs/description/
#
# algorithms
# Medium (45.39%)
# Total Accepted:    334.3K
# Total Submissions: 734.5K
# Testcase Example:  '[1,2,3,4]'
#
# Given a linked list, swap every two adjacent nodes and return its head.
#
# You may not modify the values in the list's nodes, only nodes itself may be
# changed.
#
#
#
# Example:
#
#
# Given 1->2->3->4, you should return the list as 2->1->4->3.
#
#
#
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def swapPairs(self, head: ListNode) -> ListNode:
        newHead = ListNode(0)
        newHead.next = head
        pre = newHead
        cur = head
        while pre.next and pre.next.next:
            cur = pre.next
            pre.next = cur.next
            cur.next = pre.next.next
            pre.next.next = cur
            pre = cur
        return newHead.next

